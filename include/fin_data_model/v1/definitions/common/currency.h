
#ifndef FIN_DATA_MODEL_CURRENCY_H
#define FIN_DATA_MODEL_CURRENCY_H

namespace fin_data_model
{
    enum class Currency { ACU = 1, ADP = 2, AED = 3, AFA = 4, ALL = 5, AMD = 6, ANG = 7, AOA = 8, AOK = 9, AON
        = 10, ARA = 11, ARS = 12, ARZ = 13, ATS = 14, AUD = 15, AUZ = 16, AZM = 17, AZN = 18, B03 = 19, BAD =
        20, BAK = 21, BAM = 22, BBD = 23, BDN = 24, BDT = 25, BEF = 26, BGL = 27, BGN = 28, BHD = 29, BIF =
        30, BMD = 31, BND = 32, BOB = 33, BR6 = 34, BRE = 35, BRF = 36, BRL = 37, BRR = 38, BSD = 39, BTC =
        40, BTN = 41, BTR = 42, BWP = 43, BYR = 44, BZD = 45, C23 = 46, CAC = 47, CAD = 48, CAZ = 49, CCI =
        50, CDF = 51, CFA = 52, CHF = 53, CHZ = 54, CLF = 55, CLP = 56, CLZ = 57, CNH = 58, CNO = 59, CNY =
        60, CNZ = 61, COP = 62, COZ = 63, CPB = 64, CPI = 65, CRC = 66, CUP = 67, CVE = 68, CYP = 69, CZH =
        70, CZK = 71, DAX = 72, DEM = 73, DIJ = 74, DJF = 75, DKK = 76, DOP = 77, DZD = 78, E51 = 79, E52 =
        80, E53 = 81, E54 = 82, ECI = 83, ECS = 84, ECU = 85, EEK = 86, EF0 = 87, EGP = 88, ESP = 89, ETB =
        90, ETH = 91, EUR = 92, EUZ = 93, F06 = 94, FED = 95, FIM = 96, FJD = 97, FKP = 98, FRF = 99, FT1 =
        100, GBP = 101, GBZ = 102, GEK = 103, GEL = 104, GHC = 105, GHS = 106, GHY = 107, GIP = 108, GLD =
        109, GLR = 110, GMD = 111, GNF = 112, GQE = 113, GRD = 114, GTQ = 115, GWP = 116, GYD = 117, HKB =
        118, HKD = 119, HNL = 120, HRK = 121, HSI = 122, HTG = 123, HUF = 124, IDB = 125, IDO = 126, IDR =
        127, IEP = 128, IGP = 129, ILS = 130, INO = 131, INP = 132, INR = 133, IPA = 134, IPX = 135, IQD =
        136, IRR = 137, IRS = 138, ISI = 139, ISK = 140, ISO = 141, ITL = 142, J05 = 143, JMD = 144, JNI =
        145, JOD = 146, JPY = 147, JPZ = 148, JZ9 = 149, KES = 150, KGS = 151, KHR = 152, KMF = 153, KOR =
        154, KPW = 155, KRW = 156, KWD = 157, KYD = 158, KZT = 159, LAK = 160, LBA = 161, LBP = 162, LHY =
        163, LKR = 164, LRD = 165, LSL = 166, LSM = 167, LTL = 168, LUF = 169, LVL = 170, LYD = 171, MAD =
        172, MDL = 173, MGF = 174, MKD = 175, MMK = 176, MNT = 177, MOP = 178, MRO = 179, MTL = 180, MTP =
        181, MUR = 182, MVR = 183, MWK = 184, MXB = 185, MXN = 186, MXP = 187, MXW = 188, MXZ = 189, MYO =
        190, MYR = 191, MZM = 192, MZN = 193, NAD = 194, ND3 = 195, NGF = 196, NGI = 197, NGN = 198, NIC =
        199, NIO = 200, NLG = 201, NOK = 202, NOZ = 203, NPR = 204, NZD = 205, NZZ = 206, O08 = 207, OMR =
        208, PAB = 209, PEI = 210, PEN = 211, PEZ = 212, PGK = 213, PHP = 214, PKR = 215, PLN = 216, PLZ =
        217, PSI = 218, PTE = 219, PYG = 220, QAR = 221, R2K = 222, ROL = 223, RON = 224, RSD = 225, RUB =
        226, RUF = 227, RUR = 228, RWF = 229, SAR = 230, SBD = 231, SCR = 232, SDP = 233, SDR = 234, SEK =
        235, SET = 236, SGD = 237, SGS = 238, SHP = 239, SIL = 240, SIT = 241, SKK = 242, SLL = 243, SRG =
        244, SSI = 245, STD = 246, SUR = 247, SVC = 248, SVT = 249, SYP = 250, SZL = 251, T21 = 252, T51 =
        253, T52 = 254, T53 = 255, T54 = 256, T55 = 257, T71 = 258, TE0 = 259, TED = 260, TF9 = 261, THB =
        262, THO = 263, TMM = 264, TND = 265, TNT = 266, TOP = 267, TPE = 268, TPX = 269, TRB = 270, TRL =
        271, TRY = 272, TRZ = 273, TTD = 274, TWD = 275, TZS = 276, UAH = 277, UCB = 278, UDI = 279, UFC =
        280, UFZ = 281, UGS = 282, UGX = 283, USB = 284, USD = 285, UVR = 286, UYP = 287, UYU = 288, UZS =
        289, VAC = 290, VEB = 291, VEF = 292, VES = 293, VND = 294, VUV = 295, WST = 296, XAF = 297, XAG =
        298, XAU = 299, XPD = 300, XPT = 301, XCD = 302, XDR = 303, XEU = 304, XOF = 305, XPF = 306, YDD =
        307, YER = 308, YUD = 309, YUN = 310, ZAL = 311, ZAR = 312, ZAZ = 313, ZMK = 314, ZMW = 315, ZRN =
        316, ZRZ = 317, ZWD = 318, ZWL = 319, AUd = 320, BWp = 321, EUr = 322, GBp = 323, ILs = 324, KWd =
        325, MWk = 326, SGd = 327, SZl = 328, USd = 329, ZAr = 330 };
} // fin_data_model

#endif // FIN_DATA_MODEL_CURRENCY_H
