const unsigned char start[]  = {
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0xFF,0xFF,0x81,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x0F,0xFF,0xFF,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0xFF,0xFE,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x81,0xFF,0xFE,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x7F,0xFC,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x1F,0xF8,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x07,0xF0,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,0xF0,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x43,0x03,0x00,0x00,0x00,0x06,0x1F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x7F,0xFF,0xFF,0xFF,0xFF,0xFE,0x1F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x60,0x00,0x00,0x00,0x00,0x0E,0x1F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x40,0x00,0x00,0x00,0x00,0x06,0x1F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x40,0x00,0x00,0x00,0x00,0x03,0x1F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x40,0x00,0x00,0x00,0x00,0x02,0x1F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x41,0xFF,0xFF,0xC0,0x00,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x41,0xFF,0xFF,0xFF,0xFF,0xC0,0x1F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x41,0xFF,0xFF,0xF1,0xFF,0xC0,0x1F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x41,0xFC,0x3F,0xF0,0xFF,0xC0,0x1F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x61,0xE0,0x3F,0xF8,0x1F,0xC0,0x1F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x61,0x80,0x1F,0xFC,0x07,0xC0,0x1F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x61,0x00,0x3F,0xFE,0x07,0xC0,0x1F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x61,0x00,0x7F,0xFF,0x01,0xC0,0x1F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x61,0xC3,0xFF,0xFF,0xC0,0xC0,0x1F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x61,0xFC,0x7F,0xFF,0xF8,0xC0,0x1F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x61,0xFC,0x78,0x7C,0x7F,0xC1,0x8F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x61,0xFC,0x38,0x3C,0x7F,0xC1,0x07,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x61,0xFC,0x3C,0x3C,0x3F,0xC1,0x07,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x61,0xFC,0x38,0x18,0x3F,0xC1,0x07,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x70,0xFC,0x38,0x10,0x3F,0xC1,0x07,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x70,0xFC,0x00,0x00,0x7F,0xC1,0x07,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x70,0xFC,0x00,0x00,0x7F,0xC1,0x07,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x70,0xFE,0x01,0x00,0xFF,0xC1,0x07,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x70,0xFF,0x00,0xEF,0xFF,0xE1,0x07,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x70,0x00,0x00,0x00,0x00,0x01,0x07,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x70,0x00,0x00,0x00,0x00,0x01,0x07,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x70,0x00,0x00,0x00,0x00,0x01,0x07,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x78,0x00,0x00,0x00,0x00,0x07,0x07,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0xFC,0xFF,0xFF,0xC0,0x00,0x27,0x07,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x03,0xFF,0xFF,0xE0,0x1F,0xC7,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x03,0xFF,0xFF,0xE0,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x07,0xFF,0xFF,0xE0,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x0F,0xFF,0xFF,0xF0,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF
};//开机loge


//中文
const unsigned char tq1[]{
0x00,0x00,0x3F,0xF8,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0xFF,0xFE,
0x01,0x00,0x02,0x80,0x02,0x80,0x04,0x40,0x04,0x40,0x08,0x20,0x10,0x10,
0x20,0x08,0xC0,0x06//天0
};
const unsigned char tq2[]{
0x10,0x00,0x10,0x00,0x3F,0xFC,0x20,0x00,0x4F,0xF0,0x80,0x00,0x3F,0xF0,
0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x0A,0x00,0x0A,
0x00,0x06,0x00,0x02//气1,
};
const unsigned char du[]{
0x00,0x4C,0x72,0x20,0x20,0x20,0x1C,0x00
};

const unsigned char qing[]{
0x00,0x7E,0x6E,0x7F,0x72,0x7E,0x12,0x00,//晴0
/* (8 X 8 , Sakkal Majalla )*/
};
const unsigned char yun[]{
0x00,0x3E,0x00,0x02,0x3C,0x24,0x46,0x38,//云1
/* (8 X 8 , Sakkal Majalla )*/
};
const unsigned char yin[]{
0x00,0x7E,0x72,0x7E,0x6E,0x72,0x52,0x22,//阴2
/* (8 X 8 , Sakkal Majalla )*/
};
const unsigned char tian[] {
0x00,0x3C,0x10,0x12,0x7C,0x28,0x24,0xC2,//天3
/* (8 X 8 , Sakkal Majalla )*/
};
const unsigned char yu[] {
0x00,0x7C,0x52,0x7E,0x52,0x76,0x42,0x00,//雨4
/* (8 X 8 , Sakkal Majalla )*/
};
const unsigned char zhen[]{
0x00,0x68,0x5E,0x54,0x6C,0x66,0x5C,0x04,//阵5
/* (8 X 8 , Sakkal Majalla )*/
};
const unsigned char lei[]{
0x00,0x3C,0xD2,0x10,0x3C,0x54,0x7C,0x00,//雷6
/* (8 X 8 , Sakkal Majalla )*/
};
const unsigned char duo[]{
0x00,0x12,0x7C,0x10,0x72,0x3C,0x08,0x70,//多7
/* (8 X 8 , Sakkal Majalla )*/
};
const unsigned char jian[]{
0x00,0x7E,0x62,0x7A,0x6A,0x6A,0x52,0x02,//间8
/* (8 X 8 , Sakkal Majalla )*/
};
const unsigned char bing[]{
0x08,0x68,0x4A,0x7C,0x5C,0xAA,0x08,0x08,//冰9
/* (8 X 8 , Sakkal Majalla )*/
};
const unsigned char bao[]{
0x00,0xFE,0x24,0x20,0x5C,0xEC,0x54,0x3E,//雹10
/* (8 X 8 , Sakkal Majalla )*/
};
const unsigned char xue[]{
0x00,0x3C,0x52,0x00,0x04,0x3C,0x04,0x38,//雪11
/* (8 X 8 , Sakkal Majalla )*/
};
const unsigned char wu[]{
0x00,0x7C,0x12,0x3C,0xD0,0x7E,0x14,0x68,//雾12
/* (8 X 8 , Sakkal Majalla )*/
};
const unsigned char mai[]{
0x00,0x7E,0x10,0x52,0x6E,0x7A,0x7C,0x30,//霾13
/* (8 X 8 , Sakkal Majalla )*/
};
const unsigned char sha[]{
0x00,0x08,0x1A,0xEA,0x62,0xC4,0x48,0x30,//沙14
/* (8 X 8 , Sakkal Majalla )*/
};
const unsigned char chen[]{
0x00,0x10,0x52,0x90,0x10,0x7C,0x10,0x6E,//尘15
/* (8 X 8 , Sakkal Majalla )*/
};
const unsigned char bao2[]{
0x00,0x7C,0x3C,0x7E,0x7F,0x7C,0x3A,0x10,//暴16
/* (8 X 8 , Sakkal Majalla )*/
};
const unsigned char dong[]{
0x00,0x00,0x08,0x00,0x7F,0x80,0x10,0x00,0x24,0x00,0x3F,0x80,0x16,0x00,
0x25,0x00,0x44,0x80,0x08,0x00,//东0
/* (10 X 10 , Sakkal Majalla )*/
};
const unsigned char xi[]{
0x00,0x00,0x00,0x80,0x3F,0x00,0x14,0x00,0x7F,0x80,0x54,0x80,0x54,0x80,
0x63,0x80,0x40,0x80,0x7F,0x00,//西1
/* (10 X 10 , Sakkal Majalla )*/
};
const unsigned char nan_1[]{
0x00,0x00,0x08,0x00,0x7F,0x80,0x49,0x00,0x77,0x00,0x57,0x00,0x49,0x00,
0x7F,0x00,0x49,0x00,0x01,0x00,//南2
/* (10 X 10 , Sakkal Majalla )*/
};
const unsigned char bei[]{
0x00,0x00,0x14,0x00,0x14,0x00,0x14,0x80,0x37,0x00,0x14,0x00,0x14,0x00,
0x14,0x00,0x74,0x80,0x13,0x00,//北3
/* (10 X 10 , Sakkal Majalla )*/
};
const unsigned char feng[]{
0x00,0x00,0x00,0x00,0x7F,0x00,0x43,0x00,0x55,0x00,0x49,0x00,0x55,0x00,
0x53,0x00,0x60,0x80,0x80,0x80,//风4
/* (10 X 10 , Sakkal Majalla )*/
};
