#ifndef ODBCHELPER_H
#define ODBCHELPER_H

#pragma execution_character_set("utf-8")

#include "QtSql/qsqlquery.h"
#include "QtSql/qsqldatabase.h"
#include <QDebug>
#include <QMessageBox>
#include "QtSql/qsqlerror.h"

extern int m;
extern int n;

extern double* east1;
extern double* north1;
extern double* altitude1;
extern double* depth1;
extern double* east2;
extern double* north2;
extern double* altitude2;
extern double* depth2;
extern QString* jborehole;

extern int L1_1;

extern double* jeastfromL1_1;
extern double* jnorthfromL1_1;
extern double* jaltitudefromL1_1;
extern double* jeasttoL1_1;
extern double* jnorthtoL1_1;
extern double* jaltitudetoL1_1;

extern int L1_2;

extern double* jeastfromL1_2;
extern double* jnorthfromL1_2;
extern double* jaltitudefromL1_2;
extern double* jeasttoL1_2;
extern double* jnorthtoL1_2;
extern double* jaltitudetoL1_2;

extern int L2_1;

extern double* jeastfromL2_1;
extern double* jnorthfromL2_1;
extern double* jaltitudefromL2_1;
extern double* jeasttoL2_1;
extern double* jnorthtoL2_1;
extern double* jaltitudetoL2_1;

extern int L2_2;

extern double* jeastfromL2_2;
extern double* jnorthfromL2_2;
extern double* jaltitudefromL2_2;
extern double* jeasttoL2_2;
extern double* jnorthtoL2_2;
extern double* jaltitudetoL2_2;

extern int L2_3;

extern double* jeastfromL2_3;
extern double* jnorthfromL2_3;
extern double* jaltitudefromL2_3;
extern double* jeasttoL2_3;
extern double* jnorthtoL2_3;
extern double* jaltitudetoL2_3;

extern int L3_1;

extern double* jeastfromL3_1;
extern double* jnorthfromL3_1;
extern double* jaltitudefromL3_1;
extern double* jeasttoL3_1;
extern double* jnorthtoL3_1;
extern double* jaltitudetoL3_1;

extern int L3_2;

extern double* jeastfromL3_2;
extern double* jnorthfromL3_2;
extern double* jaltitudefromL3_2;
extern double* jeasttoL3_2;
extern double* jnorthtoL3_2;
extern double* jaltitudetoL3_2;

extern int L3_3;

extern double* jeastfromL3_3;
extern double* jnorthfromL3_3;
extern double* jaltitudefromL3_3;
extern double* jeasttoL3_3;
extern double* jnorthtoL3_3;
extern double* jaltitudetoL3_3;

extern int L4_1;

extern double* jeastfromL4_1;
extern double* jnorthfromL4_1;
extern double* jaltitudefromL4_1;
extern double* jeasttoL4_1;
extern double* jnorthtoL4_1;
extern double* jaltitudetoL4_1;

extern int L4_2;

extern double* jeastfromL4_2;
extern double* jnorthfromL4_2;
extern double* jaltitudefromL4_2;
extern double* jeasttoL4_2;
extern double* jnorthtoL4_2;
extern double* jaltitudetoL4_2;

extern int L5_1_1;

extern double* jeastfromL5_1_1;
extern double* jnorthfromL5_1_1;
extern double* jaltitudefromL5_1_1;
extern double* jeasttoL5_1_1;
extern double* jnorthtoL5_1_1;
extern double* jaltitudetoL5_1_1;

extern int L5_1_2;

extern double* jeastfromL5_1_2;
extern double* jnorthfromL5_1_2;
extern double* jaltitudefromL5_1_2;
extern double* jeasttoL5_1_2;
extern double* jnorthtoL5_1_2;
extern double* jaltitudetoL5_1_2;

extern int L5_2;

extern double* jeastfromL5_2;
extern double* jnorthfromL5_2;
extern double* jaltitudefromL5_2;
extern double* jeasttoL5_2;
extern double* jnorthtoL5_2;
extern double* jaltitudetoL5_2;

extern int L5_3;

extern double* jeastfromL5_3;
extern double* jnorthfromL5_3;
extern double* jaltitudefromL5_3;
extern double* jeasttoL5_3;
extern double* jnorthtoL5_3;
extern double* jaltitudetoL5_3;

extern int L5_4;

extern double* jeastfromL5_4;
extern double* jnorthfromL5_4;
extern double* jaltitudefromL5_4;
extern double* jeasttoL5_4;
extern double* jnorthtoL5_4;
extern double* jaltitudetoL5_4;

extern int L6;

extern double* jeastfromL6;
extern double* jnorthfromL6;
extern double* jaltitudefromL6;
extern double* jeasttoL6;
extern double* jnorthtoL6;
extern double* jaltitudetoL6;

extern int L7_1;

extern double* jeastfromL7_1;
extern double* jnorthfromL7_1;
extern double* jaltitudefromL7_1;
extern double* jeasttoL7_1;
extern double* jnorthtoL7_1;
extern double* jaltitudetoL7_1;

extern int L7_2;

extern double* jeastfromL7_2;
extern double* jnorthfromL7_2;
extern double* jaltitudefromL7_2;
extern double* jeasttoL7_2;
extern double* jnorthtoL7_2;
extern double* jaltitudetoL7_2;

extern int L8_1;

extern double* jeastfromL8_1;
extern double* jnorthfromL8_1;
extern double* jaltitudefromL8_1;
extern double* jeasttoL8_1;
extern double* jnorthtoL8_1;
extern double* jaltitudetoL8_1;

extern int L8_2;

extern double* jeastfromL8_2;
extern double* jnorthfromL8_2;
extern double* jaltitudefromL8_2;
extern double* jeasttoL8_2;
extern double* jnorthtoL8_2;
extern double* jaltitudetoL8_2;

extern int L9_1;

extern double* jeastfromL9_1;
extern double* jnorthfromL9_1;
extern double* jaltitudefromL9_1;
extern double* jeasttoL9_1;
extern double* jnorthtoL9_1;
extern double* jaltitudetoL9_1;

extern int L9_2;

extern double* jeastfromL9_2;
extern double* jnorthfromL9_2;
extern double* jaltitudefromL9_2;
extern double* jeasttoL9_2;
extern double* jnorthtoL9_2;
extern double* jaltitudetoL9_2;

extern int L10;

extern double* jeastfromL10;
extern double* jnorthfromL10;
extern double* jaltitudefromL10;
extern double* jeasttoL10;
extern double* jnorthtoL10;
extern double* jaltitudetoL10;

extern int L11;

extern double* jeastfromL11;
extern double* jnorthfromL11;
extern double* jaltitudefromL11;
extern double* jeasttoL11;
extern double* jnorthtoL11;
extern double* jaltitudetoL11;

extern int L12;

extern double* jeastfromL12;
extern double* jnorthfromL12;
extern double* jaltitudefromL12;
extern double* jeasttoL12;
extern double* jnorthtoL12;
extern double* jaltitudetoL12;

extern int L13;

extern double* jeastfromL13;
extern double* jnorthfromL13;
extern double* jaltitudefromL13;
extern double* jeasttoL13;
extern double* jnorthtoL13;
extern double* jaltitudetoL13;

extern int L13_2;

extern double* jeastfromL13_2;
extern double* jnorthfromL13_2;
extern double* jaltitudefromL13_2;
extern double* jeasttoL13_2;
extern double* jnorthtoL13_2;
extern double* jaltitudetoL13_2;

extern int L14;

extern double* jeastfromL14;
extern double* jnorthfromL14;
extern double* jaltitudefromL14;
extern double* jeasttoL14;
extern double* jnorthtoL14;
extern double* jaltitudetoL14;

extern int chazhi;

extern double* jeastfromchazhi;
extern double* jnorthfromchazhi;
extern double* jaltitudefromchazhi;
extern double* jeasttochazhi;
extern double* jnorthtochazhi;
extern double* jaltitudetochazhi;

extern int bujialayer;

extern double* jeastfrombujialayer;
extern double* jnorthfrombujialayer;
extern double* jaltitudefrombujialayer;
extern double* jeasttobujialayer;
extern double* jnorthtobujialayer;
extern double* jaltitudetobujialayer;

extern int count;
extern double* jaltitudefrom;
extern double* jaltitudeto;
extern QString* jlithology;

extern int sortcount1;
extern double* jeast1;
extern double* jnorth1;
extern double* jaltitude1;

extern int sortcount3;
extern double* jeast3;
extern double* jnorth3;
extern double* jaltitude3;

extern int sortcount4;
extern double* jeast4;
extern double* jnorth4;
extern double* jaltitude4;

extern int sortcount5;
extern double* jeast5;
extern double* jnorth5;
extern double* jaltitude5;

extern int sortcount6;
extern double* jeast6;
extern double* jnorth6;
extern double* jaltitude6;


class odbchelper
{
public:
    odbchelper();
    QSqlDatabase db;
    void getjtype();
    int getdatacount1();
    int getdatacount2();
    double* getjeast1();
    double* getjnorth1();
    double* getjaltitude1();
    double* getjdepth1();
    double* getjeast2();
    double* getjnorth2();
    double* getjaltitude2();
    double* getjdepth2();
    QString* getjborehole();

    int getcount();
    double* getjaltitudefrom();
    double* getjaltitudeto();
    QString* getjlithology();

    double returnR(QString str);
    double returnG(QString str);
    double returnB(QString str);

    int getcount1();
    double* getjeastfrom1();
    double* getjnorthfrom1();
    double* getjaltitudefrom1();
    double* getjeastto1();
    double* getjnorthto1();
    double* getjaltitudeto1();

    int getcount2();
    double* getjeastfrom2();
    double* getjnorthfrom2();
    double* getjaltitudefrom2();
    double* getjeastto2();
    double* getjnorthto2();
    double* getjaltitudeto2();

    int getcount3();
    double* getjeastfrom3();
    double* getjnorthfrom3();
    double* getjaltitudefrom3();
    double* getjeastto3();
    double* getjnorthto3();
    double* getjaltitudeto3();

    int getcount4();
    double* getjeastfrom4();
    double* getjnorthfrom4();
    double* getjaltitudefrom4();
    double* getjeastto4();
    double* getjnorthto4();
    double* getjaltitudeto4();

    int getcount5();
    double* getjeastfrom5();
    double* getjnorthfrom5();
    double* getjaltitudefrom5();
    double* getjeastto5();
    double* getjnorthto5();
    double* getjaltitudeto5();

    int getcount6();
    double* getjeastfrom6();
    double* getjnorthfrom6();
    double* getjaltitudefrom6();
    double* getjeastto6();
    double* getjnorthto6();
    double* getjaltitudeto6();

    int getcount7();
    double* getjeastfrom7();
    double* getjnorthfrom7();
    double* getjaltitudefrom7();
    double* getjeastto7();
    double* getjnorthto7();
    double* getjaltitudeto7();

    int getcount8();
    double* getjeastfrom8();
    double* getjnorthfrom8();
    double* getjaltitudefrom8();
    double* getjeastto8();
    double* getjnorthto8();
    double* getjaltitudeto8();

    int getcount9();
    double* getjeastfrom9();
    double* getjnorthfrom9();
    double* getjaltitudefrom9();
    double* getjeastto9();
    double* getjnorthto9();
    double* getjaltitudeto9();

    int getcount10();
    double* getjeastfrom10();
    double* getjnorthfrom10();
    double* getjaltitudefrom10();
    double* getjeastto10();
    double* getjnorthto10();
    double* getjaltitudeto10();

    int getcount11();
    double* getjeastfrom11();
    double* getjnorthfrom11();
    double* getjaltitudefrom11();
    double* getjeastto11();
    double* getjnorthto11();
    double* getjaltitudeto11();

    int getcount12();
    double* getjeastfrom12();
    double* getjnorthfrom12();
    double* getjaltitudefrom12();
    double* getjeastto12();
    double* getjnorthto12();
    double* getjaltitudeto12();

    int getcount13();
    double* getjeastfrom13();
    double* getjnorthfrom13();
    double* getjaltitudefrom13();
    double* getjeastto13();
    double* getjnorthto13();
    double* getjaltitudeto13();

    int getcount14();
    double* getjeastfrom14();
    double* getjnorthfrom14();
    double* getjaltitudefrom14();
    double* getjeastto14();
    double* getjnorthto14();
    double* getjaltitudeto14();

    int getcount15();
    double* getjeastfrom15();
    double* getjnorthfrom15();
    double* getjaltitudefrom15();
    double* getjeastto15();
    double* getjnorthto15();
    double* getjaltitudeto15();

    int getcount16();
    double* getjeastfrom16();
    double* getjnorthfrom16();
    double* getjaltitudefrom16();
    double* getjeastto16();
    double* getjnorthto16();
    double* getjaltitudeto16();

    int getcount17();
    double* getjeastfrom17();
    double* getjnorthfrom17();
    double* getjaltitudefrom17();
    double* getjeastto17();
    double* getjnorthto17();
    double* getjaltitudeto17();

    int getcount18();
    double* getjeastfrom18();
    double* getjnorthfrom18();
    double* getjaltitudefrom18();
    double* getjeastto18();
    double* getjnorthto18();
    double* getjaltitudeto18();

    int getcount19();
    double* getjeastfrom19();
    double* getjnorthfrom19();
    double* getjaltitudefrom19();
    double* getjeastto19();
    double* getjnorthto19();
    double* getjaltitudeto19();

    int getcount20();
    double* getjeastfrom20();
    double* getjnorthfrom20();
    double* getjaltitudefrom20();
    double* getjeastto20();
    double* getjnorthto20();
    double* getjaltitudeto20();

    int getcount21();
    double* getjeastfrom21();
    double* getjnorthfrom21();
    double* getjaltitudefrom21();
    double* getjeastto21();
    double* getjnorthto21();
    double* getjaltitudeto21();

    int getcount22();
    double* getjeastfrom22();
    double* getjnorthfrom22();
    double* getjaltitudefrom22();
    double* getjeastto22();
    double* getjnorthto22();
    double* getjaltitudeto22();

    int getcount23();
    double* getjeastfrom23();
    double* getjnorthfrom23();
    double* getjaltitudefrom23();
    double* getjeastto23();
    double* getjnorthto23();
    double* getjaltitudeto23();

    int getcount24();
    double* getjeastfrom24();
    double* getjnorthfrom24();
    double* getjaltitudefrom24();
    double* getjeastto24();
    double* getjnorthto24();
    double* getjaltitudeto24();

    int getcount25();
    double* getjeastfrom25();
    double* getjnorthfrom25();
    double* getjaltitudefrom25();
    double* getjeastto25();
    double* getjnorthto25();
    double* getjaltitudeto25();

    int getcount26();
    double* getjeastfrom26();
    double* getjnorthfrom26();
    double* getjaltitudefrom26();
    double* getjeastto26();
    double* getjnorthto26();
    double* getjaltitudeto26();

    int getcount27();
    double* getjeastfrom27();
    double* getjnorthfrom27();
    double* getjaltitudefrom27();
    double* getjeastto27();
    double* getjnorthto27();
    double* getjaltitudeto27();

    int getcount28();
    double* getjeastfrom28();
    double* getjnorthfrom28();
    double* getjaltitudefrom28();
    double* getjeastto28();
    double* getjnorthto28();
    double* getjaltitudeto28();

    int getcount29();
    double* getjeastfrom29();
    double* getjnorthfrom29();
    double* getjaltitudefrom29();
    double* getjeastto29();
    double* getjnorthto29();
    double* getjaltitudeto29();

    int getcount30();
    double* getjeastfrom30();
    double* getjnorthfrom30();
    double* getjaltitudefrom30();
    double* getjeastto30();
    double* getjnorthto30();
    double* getjaltitudeto30();

    void addDrillingData(int a, QString b, QString c, float d, float e, float f, float g, QString h, QString i);
    void removeDrillingData(QString a);

    void addDrillingDetail(int a, QString b, QString c, float d, float e, float f, float g, float h, float i, float j, float k, QString l, QString m, int n, float o);
    void removeDrillingDetail(int a, QString b);

    int getsortcount1();
    double* geteast1();
    double* getnorth1();
    double* getaltitude1();

    int getsortcount3();
    double* geteast3();
    double* getnorth3();
    double* getaltitude3();

    int getsortcount4();
    double* geteast4();
    double* getnorth4();
    double* getaltitude4();

    int getsortcount5();
    double* geteast5();
    double* getnorth5();
    double* getaltitude5();

    int getsortcount6();
    double* geteast6();
    double* getnorth6();
    double* getaltitude6();

};

#endif // ODBCHELPER_H
