struct Matrix {
    float M[4][4];
};


FVector MatrixToVector(Matrix matrix) {
    return {matrix.M[3][0], matrix.M[3][1], matrix.M[3][2]};
}

Matrix MatrixMultiplication(Matrix m1, Matrix m2) {
    Matrix matrix = Matrix();
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                matrix.M[i][j] += m1.M[i][k] * m2.M[k][j];
            }
        }
    }
    return matrix;
}

Matrix TransformToMatrix(FTransform transform) {
    Matrix matrix;

    matrix.M[3][0] = transform.Translation.X;
    matrix.M[3][1] = transform.Translation.Y;
    matrix.M[3][2] = transform.Translation.Z;

    float x2 = transform.Rotation.X + transform.Rotation.X;
    float y2 = transform.Rotation.Y + transform.Rotation.Y;
    float z2 = transform.Rotation.Z + transform.Rotation.Z;

    float xx2 = transform.Rotation.X * x2;
    float yy2 = transform.Rotation.Y * y2;
    float zz2 = transform.Rotation.Z * z2;

    matrix.M[0][0] = (1.f - (yy2 + zz2)) * transform.Scale3D.X;
    matrix.M[1][1] = (1.f - (xx2 + zz2)) * transform.Scale3D.Y;
    matrix.M[2][2] = (1.f - (xx2 + yy2)) * transform.Scale3D.Z;

    float yz2 = transform.Rotation.Y * z2;
    float wx2 = transform.Rotation.W * x2;
    matrix.M[2][1] = (yz2 - wx2) * transform.Scale3D.Z;
    matrix.M[1][2] = (yz2 + wx2) * transform.Scale3D.Y;

    float xy2 = transform.Rotation.X * y2;
    float wz2 = transform.Rotation.W * z2;
    matrix.M[1][0] = (xy2 - wz2) * transform.Scale3D.Y;
    matrix.M[0][1] = (xy2 + wz2) * transform.Scale3D.X;

    float xz2 = transform.Rotation.X * z2;
    float wy2 = transform.Rotation.W * y2;
    matrix.M[2][0] = (xz2 + wy2) * transform.Scale3D.Z;
    matrix.M[0][2] = (xz2 - wy2) * transform.Scale3D.X;

    matrix.M[0][3] = 0;
    matrix.M[1][3] = 0;
    matrix.M[2][3] = 0;
    matrix.M[3][3] = 1;

    return matrix;
}

Matrix RotatorToMatrix(FRotator rotation) {
    float radPitch = rotation.Pitch * ((float) M_PI / 180.f);
    float radYaw = rotation.Yaw * ((float) M_PI / 180.f);
    float radRoll = rotation.Roll * ((float) M_PI / 180.f);

    float SP = sinf(radPitch);
    float CP = cosf(radPitch);
    float SY = sinf(radYaw);
    float CY = cosf(radYaw);
    float SR = sinf(radRoll);
    float CR = cosf(radRoll);

    Matrix matrix;

    matrix.M[0][0] = (CP * CY);
    matrix.M[0][1] = (CP * SY);
    matrix.M[0][2] = (SP);
    matrix.M[0][3] = 0;

    matrix.M[1][0] = (SR * SP * CY - CR * SY);
    matrix.M[1][1] = (SR * SP * SY + CR * CY);
    matrix.M[1][2] = (-SR * CP);
    matrix.M[1][3] = 0;

    matrix.M[2][0] = (-(CR * SP * CY + SR * SY));
    matrix.M[2][1] = (CY * SR - CR * SP * SY);
    matrix.M[2][2] = (CR * CP);
    matrix.M[2][3] = 0;

    matrix.M[3][0] = 0;
    matrix.M[3][1] = 0;
    matrix.M[3][2] = 0;
    matrix.M[3][3] = 1;

    return matrix;
}

FVector TransformToLocation(FTransform c2w, FTransform transform) {
    return MatrixToVector(MatrixMultiplication(TransformToMatrix(transform), TransformToMatrix(c2w)));
}


const char *GetLootName(APickUpListWrapperActor *Loot) {
     switch (Loot->BoxType) {
	case EPickUpBoxType::EPickUpBoxType__EPickUpBoxType_LootBox:
		return "LootBox";
		default:
        return "LootBox";
}
}

const char *GetVehicleName(ASTExtraVehicleBase *Vehicle) {
    switch (Vehicle->VehicleShapeType) {
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike_SideCart:
            return "Motorbike";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Dacia:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyDacia:
            return "Dacia";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MiniBus:
            return "Mini Bus";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp01:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyPickup:
            return "Pick Up";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Buggy:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyBuggy:
            return "Buggy";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ01:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ02:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ03:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUAZ:
            return "UAZ";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PG117:
            return "PG117";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Aquarail:
            return "Aquarail";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado01:
            return "Mirado";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Rony:
            return "Rony";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Scooter:
            return "Scooter";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowMobile:
            return "Snow Mobile";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_TukTukTuk:
            return "Tuk Tuk";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowBike:
            return "Snow Bike";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Surfboard:
            return "Surf Board";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Snowboard:
            return "Snow Board";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Amphibious:
            return "Amphibious";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_LadaNiva:
            return "Lada Niva";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAV:
            return "UAV";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MegaDrop:
            return "Mega Drop";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini01:
            return "Lamborghini";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_GoldMirado:
            return "Gold Mirado";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_BigFoot:
            return "Big Foot";
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UH60:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUH60:
            return "UH60";
        default:
            return "Vehicle";
    }
}

FRotator ClampAngles(FRotator inRot) {
    FRotator outRot = inRot;
    if (outRot.Pitch > 180)
        outRot.Pitch -= 360;
    if (outRot.Pitch < -180)
        outRot.Pitch += 360;

    if (outRot.Pitch < -75.f)
        outRot.Pitch = -75.f;
    else if (outRot.Pitch > 75.f)
        outRot.Pitch = 75.f;

    while (outRot.Yaw < -180.0f)
        outRot.Yaw += 360.0f;
    while (outRot.Yaw > 180.0f)
        outRot.Yaw -= 360.0f;
    return outRot;
}

uint32_t Colors[] = {0x9241EB, 0x9EFF00, 0x006EF4, 0xCA2876, 0x0A31DE, 0xBAA7FD, 0xCEDB3F, 0x286A45, 0x58F014, 0x45CAE6, 0x773702, 0xB0CEF0, 0x3C5F51, 0x453CD7, 0x364024, 0x439997, 0x4CB612, 0xC6B564, 0x17F250, 0xE41BC0, 0xAF8E27, 0x8E382E, 0x47A101, 0x9DAC33, 0x66F4CF, 0x59A9F0, 0x798D1A, 0x2EBB59, 0xBF66C3, 0x4BD8FB, 0xBBFA54, 0x6B9881, 0x144967, 0xBAA3AE, 0xE80B9D, 0x7BA552, 0x96A456, 0x17D7B4, 0x130C39, 0x3C06A8, 0x62737E, 0xA87E89, 0xB6D3E4, 0x66B77D, 0x66E304, 0x1B80E1, 0x7A06BC, 0xBFFB1B, 0x618506, 0x7E4D34};

long GetRandomColorByIndex(int index) {
    srand(index);

    int a = 255;
    int r = ((Colors[rand() % sizeof(Colors)] & 0xFF0000) >> 16);
    int g = ((Colors[rand() % sizeof(Colors)] & 0x00FF00) >> 8);
    int b = (Colors[rand() % sizeof(Colors)] & 0x0000FF);

    return ARGB(a, r, g, b);
}

int skeletonByDistance(int distance){
    int _colorByDistance;
    if (distance < 450)
        _colorByDistance = 0xFF7600FF;
    if (distance < 100)
        _colorByDistance = 0xFFD7FF40;
    if (distance < 80)
        _colorByDistance = 0xFF0096FF;
    if (distance < 50)
        _colorByDistance = 0xFF7600FF;
    return _colorByDistance;
}

uint32_t ColorsBack[] =
		{
				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800,

				0x818181,
				0x0096FF,
				0xE91E63,
				0xFF00E1,
				0xAB00FF,
				0x6100FF,
				0x0051FF,
				0x00BCFF,
				0x00E4FF,
				0x00FFAE,
				0x00FF79,
				0x00FF31,
				0x8FFF00,
				0xE2FF00,
				0xE2FF00,
				0xFFC900,
				0xFF8000,
				0xB00082,
				0xA700B0,
				0x7600B0,
				0x4100B0,
				0x003EB0,
				0x0074B0,
				0x009BB0,
				0x00B07B,
				0x00B019,
				0x51B000,
				0x98B000,
				0xB08B00,
				0xB05800

		};
long GetRandomColorByIndexBack(int index) {
	srand(index);

	int a = 250;
	int r = ((ColorsBack[rand() % sizeof(ColorsBack)] & 0xFF0000) >> 16);
	int g = ((ColorsBack[rand() % sizeof(ColorsBack)] & 0x00FF00) >> 8);
	int b = (ColorsBack[rand() % sizeof(ColorsBack)] & 0x0000FF);

	return ARGB(a, r, g, b);
}
long GetRandomColorByIndexAlpa(int index) {
	srand(index);

	int a = 180;
	int r = ((ColorsBack[rand() % sizeof(ColorsBack)] & 0xFF0000) >> 16);
	int g = ((ColorsBack[rand() % sizeof(ColorsBack)] & 0x00FF00) >> 8);
	int b = (ColorsBack[rand() % sizeof(ColorsBack)] & 0x0000FF);

	return ARGB(a, r, g, b);
}

long GetRandomColorByIndexLine(int index) {
	srand(index);

	int a = 255;
	int r = ((ColorsBack[rand() % sizeof(ColorsBack)] & 0xFF0000) >> 16);
	int g = ((ColorsBack[rand() % sizeof(ColorsBack)] & 0x00FF00) >> 8);
	int b = (ColorsBack[rand() % sizeof(ColorsBack)] & 0x0000FF);

	return ARGB(a, r, g, b);
}
