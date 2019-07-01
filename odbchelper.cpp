#include "odbchelper.h"

#pragma execution_character_set("utf-8")

int m;
int n;

double* east1;
double* north1;
double* altitude1;
double* depth1;
double* east2;
double* north2;
double* altitude2;
double* depth2;
QString* jborehole;

int L1_1;

double* jeastfromL1_1;
double* jnorthfromL1_1;
double* jaltitudefromL1_1;
double* jeasttoL1_1;
double* jnorthtoL1_1;
double* jaltitudetoL1_1;

int L1_2;

double* jeastfromL1_2;
double* jnorthfromL1_2;
double* jaltitudefromL1_2;
double* jeasttoL1_2;
double* jnorthtoL1_2;
double* jaltitudetoL1_2;

int L2_1;

double* jeastfromL2_1;
double* jnorthfromL2_1;
double* jaltitudefromL2_1;
double* jeasttoL2_1;
double* jnorthtoL2_1;
double* jaltitudetoL2_1;

int L2_2;

double* jeastfromL2_2;
double* jnorthfromL2_2;
double* jaltitudefromL2_2;
double* jeasttoL2_2;
double* jnorthtoL2_2;
double* jaltitudetoL2_2;

int L2_3;

double* jeastfromL2_3;
double* jnorthfromL2_3;
double* jaltitudefromL2_3;
double* jeasttoL2_3;
double* jnorthtoL2_3;
double* jaltitudetoL2_3;

int L3_1;

double* jeastfromL3_1;
double* jnorthfromL3_1;
double* jaltitudefromL3_1;
double* jeasttoL3_1;
double* jnorthtoL3_1;
double* jaltitudetoL3_1;

int L3_2;

double* jeastfromL3_2;
double* jnorthfromL3_2;
double* jaltitudefromL3_2;
double* jeasttoL3_2;
double* jnorthtoL3_2;
double* jaltitudetoL3_2;

int L3_3;

double* jeastfromL3_3;
double* jnorthfromL3_3;
double* jaltitudefromL3_3;
double* jeasttoL3_3;
double* jnorthtoL3_3;
double* jaltitudetoL3_3;

int L4_1;

double* jeastfromL4_1;
double* jnorthfromL4_1;
double* jaltitudefromL4_1;
double* jeasttoL4_1;
double* jnorthtoL4_1;
double* jaltitudetoL4_1;

int L4_2;

double* jeastfromL4_2;
double* jnorthfromL4_2;
double* jaltitudefromL4_2;
double* jeasttoL4_2;
double* jnorthtoL4_2;
double* jaltitudetoL4_2;

int L5_1_1;

double* jeastfromL5_1_1;
double* jnorthfromL5_1_1;
double* jaltitudefromL5_1_1;
double* jeasttoL5_1_1;
double* jnorthtoL5_1_1;
double* jaltitudetoL5_1_1;

int L5_1_2;

double* jeastfromL5_1_2;
double* jnorthfromL5_1_2;
double* jaltitudefromL5_1_2;
double* jeasttoL5_1_2;
double* jnorthtoL5_1_2;
double* jaltitudetoL5_1_2;

int L5_2;

double* jeastfromL5_2;
double* jnorthfromL5_2;
double* jaltitudefromL5_2;
double* jeasttoL5_2;
double* jnorthtoL5_2;
double* jaltitudetoL5_2;

int L5_3;

double* jeastfromL5_3;
double* jnorthfromL5_3;
double* jaltitudefromL5_3;
double* jeasttoL5_3;
double* jnorthtoL5_3;
double* jaltitudetoL5_3;

int L5_4;

double* jeastfromL5_4;
double* jnorthfromL5_4;
double* jaltitudefromL5_4;
double* jeasttoL5_4;
double* jnorthtoL5_4;
double* jaltitudetoL5_4;

int L6;

double* jeastfromL6;
double* jnorthfromL6;
double* jaltitudefromL6;
double* jeasttoL6;
double* jnorthtoL6;
double* jaltitudetoL6;

int L7_1;

double* jeastfromL7_1;
double* jnorthfromL7_1;
double* jaltitudefromL7_1;
double* jeasttoL7_1;
double* jnorthtoL7_1;
double* jaltitudetoL7_1;

int L7_2;

double* jeastfromL7_2;
double* jnorthfromL7_2;
double* jaltitudefromL7_2;
double* jeasttoL7_2;
double* jnorthtoL7_2;
double* jaltitudetoL7_2;

int L8_1;

double* jeastfromL8_1;
double* jnorthfromL8_1;
double* jaltitudefromL8_1;
double* jeasttoL8_1;
double* jnorthtoL8_1;
double* jaltitudetoL8_1;

int L8_2;

double* jeastfromL8_2;
double* jnorthfromL8_2;
double* jaltitudefromL8_2;
double* jeasttoL8_2;
double* jnorthtoL8_2;
double* jaltitudetoL8_2;

int L9_1;

double* jeastfromL9_1;
double* jnorthfromL9_1;
double* jaltitudefromL9_1;
double* jeasttoL9_1;
double* jnorthtoL9_1;
double* jaltitudetoL9_1;

int L9_2;

double* jeastfromL9_2;
double* jnorthfromL9_2;
double* jaltitudefromL9_2;
double* jeasttoL9_2;
double* jnorthtoL9_2;
double* jaltitudetoL9_2;

int L10;

double* jeastfromL10;
double* jnorthfromL10;
double* jaltitudefromL10;
double* jeasttoL10;
double* jnorthtoL10;
double* jaltitudetoL10;

int L11;

double* jeastfromL11;
double* jnorthfromL11;
double* jaltitudefromL11;
double* jeasttoL11;
double* jnorthtoL11;
double* jaltitudetoL11;

int L12;

double* jeastfromL12;
double* jnorthfromL12;
double* jaltitudefromL12;
double* jeasttoL12;
double* jnorthtoL12;
double* jaltitudetoL12;

int L13;

double* jeastfromL13;
double* jnorthfromL13;
double* jaltitudefromL13;
double* jeasttoL13;
double* jnorthtoL13;
double* jaltitudetoL13;

int L13_2;

double* jeastfromL13_2;
double* jnorthfromL13_2;
double* jaltitudefromL13_2;
double* jeasttoL13_2;
double* jnorthtoL13_2;
double* jaltitudetoL13_2;

int L14;

double* jeastfromL14;
double* jnorthfromL14;
double* jaltitudefromL14;
double* jeasttoL14;
double* jnorthtoL14;
double* jaltitudetoL14;

int chazhi;

double* jeastfromchazhi;
double* jnorthfromchazhi;
double* jaltitudefromchazhi;
double* jeasttochazhi;
double* jnorthtochazhi;
double* jaltitudetochazhi;

int bujialayer;

double* jeastfrombujialayer;
double* jnorthfrombujialayer;
double* jaltitudefrombujialayer;
double* jeasttobujialayer;
double* jnorthtobujialayer;
double* jaltitudetobujialayer;

int count;

double* jaltitudefrom;
double* jaltitudeto;
QString* jlithology;

int sortcount1;
double* jeast1;
double* jnorth1;
double* jaltitude1;

int sortcount3;
double* jeast3;
double* jnorth3;
double* jaltitude3;

int sortcount4;
double* jeast4;
double* jnorth4;
double* jaltitude4;

int sortcount5;
double* jeast5;
double* jnorth5;
double* jaltitude5;

int sortcount6;
double* jeast6;
double* jnorth6;
double* jaltitude6;

odbchelper::odbchelper()
{
    this->db=QSqlDatabase::addDatabase("QODBC");
    QString conn = "Driver={PostgreSQL UNICODE(x64)};server=127.0.0.1;port=5433;uid=postgres;pwd=123456;database=drilling";
    this->db.setDatabaseName(conn);
    if(!this->db.open()){
        QMessageBox::critical(0,QString("odbc error"),
                              QString("??Openopen db error'").arg(this->db.lastError().text()));
        return;
    }
    m=this->getdatacount1();
    n=this->getdatacount2();

    east1=new double[m];
    east1=this->getjeast1();
    north1=new double[m];
    north1=this->getjnorth1();
    altitude1=new double[m];
    altitude1=this->getjaltitude1();
    depth1=new double[m];
    depth1=this->getjdepth1();

    east2=new double[n];
    east2=this->getjeast2();
    north2=new double[n];
    north2=this->getjnorth2();
    altitude2=new double[n];
    altitude2=this->getjaltitude2();
    depth2=new double[n];
    depth2=this->getjdepth2();

    jborehole=new QString[m];
    jborehole=this->getjborehole();

    L1_1=this->getcount1();

    jeastfromL1_1=new double[L1_1];
    jeastfromL1_1=this->getjeastfrom1();
    jnorthfromL1_1=new double[L1_1];
    jnorthfromL1_1=this->getjnorthfrom1();
    jaltitudefromL1_1=new double[L1_1];
    jaltitudefromL1_1=this->getjaltitudefrom1();
    jeasttoL1_1=new double[L1_1];
    jeasttoL1_1=this->getjeastto1();
    jnorthtoL1_1=new double[L1_1];
    jnorthtoL1_1=this->getjnorthto1();
    jaltitudetoL1_1=new double[L1_1];
    jaltitudetoL1_1=this->getjaltitudeto1();

    L1_2=this->getcount2();

    jeastfromL1_2=new double[L1_2];
    jeastfromL1_2=this->getjeastfrom2();
    jnorthfromL1_2=new double[L1_2];
    jnorthfromL1_2=this->getjnorthfrom2();
    jaltitudefromL1_2=new double[L1_2];
    jaltitudefromL1_2=this->getjaltitudefrom2();
    jeasttoL1_2=new double[L1_2];
    jeasttoL1_2=this->getjeastto2();
    jnorthtoL1_2=new double[L1_2];
    jnorthtoL1_2=this->getjnorthto2();
    jaltitudetoL1_2=new double[L1_2];
    jaltitudetoL1_2=this->getjaltitudeto2();

    L2_1=this->getcount3();

    jeastfromL2_1=new double[L2_1];
    jeastfromL2_1=this->getjeastfrom3();
    jnorthfromL2_1=new double[L2_1];
    jnorthfromL2_1=this->getjnorthfrom3();
    jaltitudefromL2_1=new double[L2_1];
    jaltitudefromL2_1=this->getjaltitudefrom3();
    jeasttoL2_1=new double[L2_1];
    jeasttoL2_1=this->getjeastto3();
    jnorthtoL2_1=new double[L2_1];
    jnorthtoL2_1=this->getjnorthto3();
    jaltitudetoL2_1=new double[L2_1];
    jaltitudetoL2_1=this->getjaltitudeto3();

    L2_2=this->getcount4();

    jeastfromL2_2=new double[L2_2];
    jeastfromL2_2=this->getjeastfrom4();
    jnorthfromL2_2=new double[L2_2];
    jnorthfromL2_2=this->getjnorthfrom4();
    jaltitudefromL2_2=new double[L2_2];
    jaltitudefromL2_2=this->getjaltitudefrom4();
    jeasttoL2_2=new double[L2_2];
    jeasttoL2_2=this->getjeastto4();
    jnorthtoL2_2=new double[L2_2];
    jnorthtoL2_2=this->getjnorthto4();
    jaltitudetoL2_2=new double[L2_2];
    jaltitudetoL2_2=this->getjaltitudeto4();

    L2_3=this->getcount5();

    jeastfromL2_3=new double[L2_3];
    jeastfromL2_3=this->getjeastfrom5();
    jnorthfromL2_3=new double[L2_3];
    jnorthfromL2_3=this->getjnorthfrom5();
    jaltitudefromL2_3=new double[L2_3];
    jaltitudefromL2_3=this->getjaltitudefrom5();
    jeasttoL2_3=new double[L2_3];
    jeasttoL2_3=this->getjeastto5();
    jnorthtoL2_3=new double[L2_3];
    jnorthtoL2_3=this->getjnorthto5();
    jaltitudetoL2_3=new double[L2_3];
    jaltitudetoL2_3=this->getjaltitudeto5();

    L3_1=this->getcount6();

    jeastfromL3_1=new double[L3_1];
    jeastfromL3_1=this->getjeastfrom6();
    jnorthfromL3_1=new double[L3_1];
    jnorthfromL3_1=this->getjnorthfrom6();
    jaltitudefromL3_1=new double[L3_1];
    jaltitudefromL3_1=this->getjaltitudefrom6();
    jeasttoL3_1=new double[L3_1];
    jeasttoL3_1=this->getjeastto6();
    jnorthtoL3_1=new double[L3_1];
    jnorthtoL3_1=this->getjnorthto6();
    jaltitudetoL3_1=new double[L3_1];
    jaltitudetoL3_1=this->getjaltitudeto6();

    L3_2=this->getcount7();

    jeastfromL3_2=new double[L3_2];
    jeastfromL3_2=this->getjeastfrom7();
    jnorthfromL3_2=new double[L3_2];
    jnorthfromL3_2=this->getjnorthfrom7();
    jaltitudefromL3_2=new double[L3_2];
    jaltitudefromL3_2=this->getjaltitudefrom7();
    jeasttoL3_2=new double[L3_2];
    jeasttoL3_2=this->getjeastto7();
    jnorthtoL3_2=new double[L3_2];
    jnorthtoL3_2=this->getjnorthto7();
    jaltitudetoL3_2=new double[L3_2];
    jaltitudetoL3_2=this->getjaltitudeto7();

    L3_3=this->getcount8();

    jeastfromL3_3=new double[L3_3];
    jeastfromL3_3=this->getjeastfrom8();
    jnorthfromL3_3=new double[L3_3];
    jnorthfromL3_3=this->getjnorthfrom8();
    jaltitudefromL3_3=new double[L3_3];
    jaltitudefromL3_3=this->getjaltitudefrom8();
    jeasttoL3_3=new double[L3_3];
    jeasttoL3_3=this->getjeastto8();
    jnorthtoL3_3=new double[L3_3];
    jnorthtoL3_3=this->getjnorthto8();
    jaltitudetoL3_3=new double[L3_3];
    jaltitudetoL3_3=this->getjaltitudeto8();

    L4_1=this->getcount9();

    jeastfromL4_1=new double[L4_1];
    jeastfromL4_1=this->getjeastfrom9();
    jnorthfromL4_1=new double[L4_1];
    jnorthfromL4_1=this->getjnorthfrom9();
    jaltitudefromL4_1=new double[L4_1];
    jaltitudefromL4_1=this->getjaltitudefrom9();
    jeasttoL4_1=new double[L4_1];
    jeasttoL4_1=this->getjeastto9();
    jnorthtoL4_1=new double[L4_1];
    jnorthtoL4_1=this->getjnorthto9();
    jaltitudetoL4_1=new double[L4_1];
    jaltitudetoL4_1=this->getjaltitudeto9();

    L4_2=this->getcount10();

    jeastfromL4_2=new double[L4_2];
    jeastfromL4_2=this->getjeastfrom10();
    jnorthfromL4_2=new double[L4_2];
    jnorthfromL4_2=this->getjnorthfrom10();
    jaltitudefromL4_2=new double[L4_2];
    jaltitudefromL4_2=this->getjaltitudefrom10();
    jeasttoL4_2=new double[L4_2];
    jeasttoL4_2=this->getjeastto10();
    jnorthtoL4_2=new double[L4_2];
    jnorthtoL4_2=this->getjnorthto10();
    jaltitudetoL4_2=new double[L4_2];
    jaltitudetoL4_2=this->getjaltitudeto10();

    L5_1_1=this->getcount11();

    jeastfromL5_1_1=new double[L5_1_1];
    jeastfromL5_1_1=this->getjeastfrom11();
    jnorthfromL5_1_1=new double[L5_1_1];
    jnorthfromL5_1_1=this->getjnorthfrom11();
    jaltitudefromL5_1_1=new double[L5_1_1];
    jaltitudefromL5_1_1=this->getjaltitudefrom11();
    jeasttoL5_1_1=new double[L5_1_1];
    jeasttoL5_1_1=this->getjeastto11();
    jnorthtoL5_1_1=new double[L5_1_1];
    jnorthtoL5_1_1=this->getjnorthto11();
    jaltitudetoL5_1_1=new double[L5_1_1];
    jaltitudetoL5_1_1=this->getjaltitudeto11();

    L5_1_2=this->getcount12();

    jeastfromL5_1_2=new double[L5_1_2];
    jeastfromL5_1_2=this->getjeastfrom12();
    jnorthfromL5_1_2=new double[L5_1_2];
    jnorthfromL5_1_2=this->getjnorthfrom12();
    jaltitudefromL5_1_2=new double[L5_1_2];
    jaltitudefromL5_1_2=this->getjaltitudefrom12();
    jeasttoL5_1_2=new double[L5_1_2];
    jeasttoL5_1_2=this->getjeastto12();
    jnorthtoL5_1_2=new double[L5_1_2];
    jnorthtoL5_1_2=this->getjnorthto12();
    jaltitudetoL5_1_2=new double[L5_1_2];
    jaltitudetoL5_1_2=this->getjaltitudeto12();

    L5_2=this->getcount13();

    jeastfromL5_2=new double[L5_2];
    jeastfromL5_2=this->getjeastfrom13();
    jnorthfromL5_2=new double[L5_2];
    jnorthfromL5_2=this->getjnorthfrom13();
    jaltitudefromL5_2=new double[L5_2];
    jaltitudefromL5_2=this->getjaltitudefrom13();
    jeasttoL5_2=new double[L5_2];
    jeasttoL5_2=this->getjeastto13();
    jnorthtoL5_2=new double[L5_2];
    jnorthtoL5_2=this->getjnorthto13();
    jaltitudetoL5_2=new double[L5_2];
    jaltitudetoL5_2=this->getjaltitudeto13();

    L5_3=this->getcount14();

    jeastfromL5_3=new double[L5_3];
    jeastfromL5_3=this->getjeastfrom14();
    jnorthfromL5_3=new double[L5_3];
    jnorthfromL5_3=this->getjnorthfrom14();
    jaltitudefromL5_3=new double[L5_3];
    jaltitudefromL5_3=this->getjaltitudefrom14();
    jeasttoL5_3=new double[L5_3];
    jeasttoL5_3=this->getjeastto14();
    jnorthtoL5_3=new double[L5_3];
    jnorthtoL5_3=this->getjnorthto14();
    jaltitudetoL5_3=new double[L5_3];
    jaltitudetoL5_3=this->getjaltitudeto14();

    L5_4=this->getcount15();

    jeastfromL5_4=new double[L5_4];
    jeastfromL5_4=this->getjeastfrom15();
    jnorthfromL5_4=new double[L5_4];
    jnorthfromL5_4=this->getjnorthfrom15();
    jaltitudefromL5_4=new double[L5_4];
    jaltitudefromL5_4=this->getjaltitudefrom15();
    jeasttoL5_4=new double[L5_4];
    jeasttoL5_4=this->getjeastto15();
    jnorthtoL5_4=new double[L5_4];
    jnorthtoL5_4=this->getjnorthto15();
    jaltitudetoL5_4=new double[L5_4];
    jaltitudetoL5_4=this->getjaltitudeto15();

    L6=this->getcount16();

    jeastfromL6=new double[L6];
    jeastfromL6=this->getjeastfrom16();
    jnorthfromL6=new double[L6];
    jnorthfromL6=this->getjnorthfrom16();
    jaltitudefromL6=new double[L6];
    jaltitudefromL6=this->getjaltitudefrom16();
    jeasttoL6=new double[L6];
    jeasttoL6=this->getjeastto16();
    jnorthtoL6=new double[L6];
    jnorthtoL6=this->getjnorthto16();
    jaltitudetoL6=new double[L6];
    jaltitudetoL6=this->getjaltitudeto16();

    L7_1=this->getcount17();

    jeastfromL7_1=new double[L7_1];
    jeastfromL7_1=this->getjeastfrom17();
    jnorthfromL7_1=new double[L7_1];
    jnorthfromL7_1=this->getjnorthfrom17();
    jaltitudefromL7_1=new double[L7_1];
    jaltitudefromL7_1=this->getjaltitudefrom17();
    jeasttoL7_1=new double[L7_1];
    jeasttoL7_1=this->getjeastto17();
    jnorthtoL7_1=new double[L7_1];
    jnorthtoL7_1=this->getjnorthto17();
    jaltitudetoL7_1=new double[L7_1];
    jaltitudetoL7_1=this->getjaltitudeto17();

    L7_2=this->getcount18();

    jeastfromL7_2=new double[L7_2];
    jeastfromL7_2=this->getjeastfrom18();
    jnorthfromL7_2=new double[L7_2];
    jnorthfromL7_2=this->getjnorthfrom18();
    jaltitudefromL7_2=new double[L7_2];
    jaltitudefromL7_2=this->getjaltitudefrom18();
    jeasttoL7_2=new double[L7_2];
    jeasttoL7_2=this->getjeastto18();
    jnorthtoL7_2=new double[L7_2];
    jnorthtoL7_2=this->getjnorthto18();
    jaltitudetoL7_2=new double[L7_2];
    jaltitudetoL7_2=this->getjaltitudeto18();

    L8_1=this->getcount19();

    jeastfromL8_1=new double[L8_1];
    jeastfromL8_1=this->getjeastfrom19();
    jnorthfromL8_1=new double[L8_1];
    jnorthfromL8_1=this->getjnorthfrom19();
    jaltitudefromL8_1=new double[L8_1];
    jaltitudefromL8_1=this->getjaltitudefrom19();
    jeasttoL8_1=new double[L8_1];
    jeasttoL8_1=this->getjeastto19();
    jnorthtoL8_1=new double[L8_1];
    jnorthtoL8_1=this->getjnorthto19();
    jaltitudetoL8_1=new double[L8_1];
    jaltitudetoL8_1=this->getjaltitudeto19();

    L8_2=this->getcount20();

    jeastfromL8_2=new double[L8_2];
    jeastfromL8_2=this->getjeastfrom20();
    jnorthfromL8_2=new double[L8_2];
    jnorthfromL8_2=this->getjnorthfrom20();
    jaltitudefromL8_2=new double[L8_2];
    jaltitudefromL8_2=this->getjaltitudefrom20();
    jeasttoL8_2=new double[L8_2];
    jeasttoL8_2=this->getjeastto20();
    jnorthtoL8_2=new double[L8_2];
    jnorthtoL8_2=this->getjnorthto20();
    jaltitudetoL8_2=new double[L8_2];
    jaltitudetoL8_2=this->getjaltitudeto20();

    L9_1=this->getcount21();

    jeastfromL9_1=new double[L9_1];
    jeastfromL9_1=this->getjeastfrom21();
    jnorthfromL9_1=new double[L9_1];
    jnorthfromL9_1=this->getjnorthfrom21();
    jaltitudefromL9_1=new double[L9_1];
    jaltitudefromL9_1=this->getjaltitudefrom21();
    jeasttoL9_1=new double[L9_1];
    jeasttoL9_1=this->getjeastto21();
    jnorthtoL9_1=new double[L9_1];
    jnorthtoL9_1=this->getjnorthto21();
    jaltitudetoL9_1=new double[L9_1];
    jaltitudetoL9_1=this->getjaltitudeto21();

    L9_2=this->getcount22();

    jeastfromL9_2=new double[L9_2];
    jeastfromL9_2=this->getjeastfrom22();
    jnorthfromL9_2=new double[L9_2];
    jnorthfromL9_2=this->getjnorthfrom22();
    jaltitudefromL9_2=new double[L9_2];
    jaltitudefromL9_2=this->getjaltitudefrom22();
    jeasttoL9_2=new double[L9_2];
    jeasttoL9_2=this->getjeastto22();
    jnorthtoL9_2=new double[L9_2];
    jnorthtoL9_2=this->getjnorthto22();
    jaltitudetoL9_2=new double[L9_2];
    jaltitudetoL9_2=this->getjaltitudeto22();

    L10=this->getcount23();

    jeastfromL10=new double[L10];
    jeastfromL10=this->getjeastfrom23();
    jnorthfromL10=new double[L10];
    jnorthfromL10=this->getjnorthfrom23();
    jaltitudefromL10=new double[L10];
    jaltitudefromL10=this->getjaltitudefrom23();
    jeasttoL10=new double[L10];
    jeasttoL10=this->getjeastto23();
    jnorthtoL10=new double[L10];
    jnorthtoL10=this->getjnorthto23();
    jaltitudetoL10=new double[L10];
    jaltitudetoL10=this->getjaltitudeto23();

    L11=this->getcount24();

    jeastfromL11=new double[L11];
    jeastfromL11=this->getjeastfrom24();
    jnorthfromL11=new double[L11];
    jnorthfromL11=this->getjnorthfrom24();
    jaltitudefromL11=new double[L11];
    jaltitudefromL11=this->getjaltitudefrom24();
    jeasttoL11=new double[L11];
    jeasttoL11=this->getjeastto24();
    jnorthtoL11=new double[L11];
    jnorthtoL11=this->getjnorthto24();
    jaltitudetoL11=new double[L11];
    jaltitudetoL11=this->getjaltitudeto24();

    L12=this->getcount25();

    jeastfromL12=new double[L12];
    jeastfromL12=this->getjeastfrom25();
    jnorthfromL12=new double[L12];
    jnorthfromL12=this->getjnorthfrom25();
    jaltitudefromL12=new double[L12];
    jaltitudefromL12=this->getjaltitudefrom25();
    jeasttoL12=new double[L12];
    jeasttoL12=this->getjeastto25();
    jnorthtoL12=new double[L12];
    jnorthtoL12=this->getjnorthto25();
    jaltitudetoL12=new double[L12];
    jaltitudetoL12=this->getjaltitudeto25();

    L13=this->getcount26();

    jeastfromL13=new double[L13];
    jeastfromL13=this->getjeastfrom26();
    jnorthfromL13=new double[L13];
    jnorthfromL13=this->getjnorthfrom26();
    jaltitudefromL13=new double[L13];
    jaltitudefromL13=this->getjaltitudefrom26();
    jeasttoL13=new double[L13];
    jeasttoL13=this->getjeastto26();
    jnorthtoL13=new double[L13];
    jnorthtoL13=this->getjnorthto26();
    jaltitudetoL13=new double[L13];
    jaltitudetoL13=this->getjaltitudeto26();

    L13_2=this->getcount27();

    jeastfromL13_2=new double[L13_2];
    jeastfromL13_2=this->getjeastfrom27();
    jnorthfromL13_2=new double[L13_2];
    jnorthfromL13_2=this->getjnorthfrom27();
    jaltitudefromL13_2=new double[L13_2];
    jaltitudefromL13_2=this->getjaltitudefrom27();
    jeasttoL13_2=new double[L13_2];
    jeasttoL13_2=this->getjeastto27();
    jnorthtoL13_2=new double[L13_2];
    jnorthtoL13_2=this->getjnorthto27();
    jaltitudetoL13_2=new double[L13_2];
    jaltitudetoL13_2=this->getjaltitudeto27();

    L14=this->getcount28();

    jeastfromL14=new double[L14];
    jeastfromL14=this->getjeastfrom28();
    jnorthfromL14=new double[L14];
    jnorthfromL14=this->getjnorthfrom28();
    jaltitudefromL14=new double[L14];
    jaltitudefromL14=this->getjaltitudefrom28();
    jeasttoL14=new double[L14];
    jeasttoL14=this->getjeastto28();
    jnorthtoL14=new double[L14];
    jnorthtoL14=this->getjnorthto28();
    jaltitudetoL14=new double[L14];
    jaltitudetoL14=this->getjaltitudeto28();

    chazhi=this->getcount29();

    jeastfromchazhi=new double[chazhi];
    jeastfromchazhi=this->getjeastfrom29();
    jnorthfromchazhi=new double[chazhi];
    jnorthfromchazhi=this->getjnorthfrom29();
    jaltitudefromchazhi=new double[chazhi];
    jaltitudefromchazhi=this->getjaltitudefrom29();
    jeasttochazhi=new double[chazhi];
    jeasttochazhi=this->getjeastto29();
    jnorthtochazhi=new double[chazhi];
    jnorthtochazhi=this->getjnorthto29();
    jaltitudetochazhi=new double[chazhi];
    jaltitudetochazhi=this->getjaltitudeto29();

    bujialayer=this->getcount30();

    jeastfrombujialayer=new double[bujialayer];
    jeastfrombujialayer=this->getjeastfrom30();
    jnorthfrombujialayer=new double[bujialayer];
    jnorthfrombujialayer=this->getjnorthfrom30();
    jaltitudefrombujialayer=new double[bujialayer];
    jaltitudefrombujialayer=this->getjaltitudefrom30();
    jeasttobujialayer=new double[bujialayer];
    jeasttobujialayer=this->getjeastto30();
    jnorthtobujialayer=new double[bujialayer];
    jnorthtobujialayer=this->getjnorthto30();
    jaltitudetobujialayer=new double[bujialayer];
    jaltitudetobujialayer=this->getjaltitudeto30();

    count=this->getcount();
    jaltitudefrom=new double[count];
    jaltitudefrom=this->getjaltitudefrom();
    jaltitudeto=new double[count];
    jaltitudeto=this->getjaltitudeto();
    jlithology=new QString[count];
    jlithology=this->getjlithology();

    sortcount1=this->getsortcount1();
    jeast1=new double[sortcount1];
    jeast1=this->geteast1();
    jnorth1=new double[sortcount1];
    jnorth1=this->getnorth1();
    jaltitude1=new double[sortcount1];
    jaltitude1=this->getaltitude1();

    sortcount3=this->getsortcount3();
    jeast3=new double[sortcount3];
    jeast3=this->geteast3();
    jnorth3=new double[sortcount3];
    jnorth3=this->getnorth3();
    jaltitude3=new double[sortcount3];
    jaltitude3=this->getaltitude3();

    sortcount4=this->getsortcount4();
    jeast4=new double[sortcount4];
    jeast4=this->geteast4();
    jnorth4=new double[sortcount4];
    jnorth4=this->getnorth4();
    jaltitude4=new double[sortcount4];
    jaltitude4=this->getaltitude4();

    sortcount5=this->getsortcount5();
    jeast5=new double[sortcount5];
    jeast5=this->geteast5();
    jnorth5=new double[sortcount5];
    jnorth5=this->getnorth5();
    jaltitude5=new double[sortcount5];
    jaltitude5=this->getaltitude5();

    sortcount6=this->getsortcount6();
    jeast6=new double[sortcount6];
    jeast6=this->geteast6();
    jnorth6=new double[sortcount6];
    jnorth6=this->getnorth6();
    jaltitude6=new double[sortcount6];
    jaltitude6=this->getaltitude6();


}

void odbchelper::getjtype()
{
    QSqlQuery *query=new QSqlQuery(db);
    QString sql="select jtype from lithologytype";
    query->exec(sql);

    while (query->next()) {
        qDebug()<<query->value(0);
    }
}

int odbchelper::getdatacount1()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mycollardata";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

int odbchelper::getdatacount2()
{
    int x=0;

    QSqlQuery *query2=new QSqlQuery(db);
    QString sql2="select count(*) from myvirtualcollardata";
    query2->exec(sql2);

    while (query2->next()) {
        x+=query2->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeast1()
{
    int x=getdatacount1();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeast from mycollardata";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeast2()
{
    int x=getdatacount2();

    double *arr = new double[x];
    int j=0;

    QSqlQuery *query2=new QSqlQuery(db);
    QString sql2="select jeast from myvirtualcollardata";
    query2->exec(sql2);

    while (query2->next()&&j<x) {
        arr[j]=query2->value(0).toDouble();
        j++;
    }

    return arr;
}

double* odbchelper::getjnorth1()
{
    int x=getdatacount1();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorth from mycollardata";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorth2()
{
    int x=getdatacount2();

    double *arr = new double[x];
    int j=0;

    QSqlQuery *query2=new QSqlQuery(db);
    QString sql2="select jnorth from myvirtualcollardata";
    query2->exec(sql2);

    while (query2->next()&&j<x) {
        arr[j]=query2->value(0).toDouble();
        j++;
    }

    return arr;
}

double* odbchelper::getjaltitude1()
{
    int x=getdatacount1();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitude from mycollardata";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitude2()
{
    int x=getdatacount2();

    double *arr = new double[x];
    int j=0;

    QSqlQuery *query2=new QSqlQuery(db);
    QString sql2="select jaltitude from myvirtualcollardata";
    query2->exec(sql2);

    while (query2->next()&&j<x) {
        arr[j]=query2->value(0).toDouble();
        j++;
    }

    return arr;
}

double* odbchelper::getjdepth1()
{
    int x = getdatacount1();

    double *arr = new double[x];
    int i = 0;

    QSqlQuery *query1 = new QSqlQuery(db);
    QString sql1 = "select jdepth from mycollardata";
    query1->exec(sql1);

    while(query1->next()&&i<x)
    {
        arr[i] = query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjdepth2()
{
    int x = getdatacount2();

    double *arr = new double[x];
    int j = 0;

    QSqlQuery *query2 = new QSqlQuery(db);
    QString sql2 = "select jdepth from myvirtualcollardata";
    query2->exec(sql2);

    while(query2->next()&&j<x)
    {
        arr[j] = query2->value(0).toDouble();
        j++;
    }

    return arr;
}

QString* odbchelper::getjborehole()
{
    int x=getdatacount1();

    QString *arr = new QString[x];
    int j = 0;
    QSqlQuery *query=new QSqlQuery(db);
    QString sql="select jborehole from mycollardata;";
    query->exec(sql);

    while(query->next()&&j<x)
    {
        arr[j] = query->value(0).toString();
        j++;
    }

    return arr;

}

double odbchelper::returnR(QString str)
{
    double r;
    QString s = str.mid(2,2);
    bool ok;
    r=(s.toInt(&ok,10))/255;
    return r;
}

double odbchelper::returnG(QString str)
{
    double g;
    QString s = str.mid(4,2);
    bool ok;
    g=(s.toInt(&ok,10))/255;
    return g;
}

double odbchelper::returnB(QString str)
{
    double b;
    QString s = str.mid(6,2);
    bool ok;
    b=(s.toInt(&ok,10))/255;
    return b;
}

int odbchelper::getcount1()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L1-1');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom1()
{
    int x=getcount1();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L1-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom1()
{
    int x=getcount1();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L1-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom1()
{
    int x=getcount1();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L1-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto1()
{
    int x=getcount1();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L1-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto1()
{
    int x=getcount1();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L1-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto1()
{
    int x=getcount1();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L1-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount2()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L1-2');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom2()
{
    int x=getcount2();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L1-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom2()
{
    int x=getcount2();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L1-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom2()
{
    int x=getcount2();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L1-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto2()
{
    int x=getcount2();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L1-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto2()
{
    int x=getcount2();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L1-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto2()
{
    int x=getcount2();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L1-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount3()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L2-1');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom3()
{
    int x=getcount3();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L2-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom3()
{
    int x=getcount3();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L2-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom3()
{
    int x=getcount3();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L2-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto3()
{
    int x=getcount3();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L2-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto3()
{
    int x=getcount3();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L2-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto3()
{
    int x=getcount3();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L2-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount4()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L2-2');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom4()
{
    int x=getcount4();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L2-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom4()
{
    int x=getcount4();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L2-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom4()
{
    int x=getcount4();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L2-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto4()
{
    int x=getcount4();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L2-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto4()
{
    int x=getcount4();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L2-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto4()
{
    int x=getcount4();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L2-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount5()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L2-3');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom5()
{
    int x=getcount5();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L2-3') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom5()
{
    int x=getcount5();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L2-3') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom5()
{
    int x=getcount5();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L2-3') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto5()
{
    int x=getcount5();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L2-3') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto5()
{
    int x=getcount5();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L2-3') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto5()
{
    int x=getcount5();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L2-3') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount6()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L3-1');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom6()
{
    int x=getcount6();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L3-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom6()
{
    int x=getcount6();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L3-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom6()
{
    int x=getcount6();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L3-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto6()
{
    int x=getcount6();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L3-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto6()
{
    int x=getcount6();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L3-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto6()
{
    int x=getcount6();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L3-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount7()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L3-2');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom7()
{
    int x=getcount7();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L3-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom7()
{
    int x=getcount7();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L3-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom7()
{
    int x=getcount7();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L3-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto7()
{
    int x=getcount7();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L3-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto7()
{
    int x=getcount7();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L3-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto7()
{
    int x=getcount7();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L3-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount8()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L3-3');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom8()
{
    int x=getcount8();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L3-3') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom8()
{
    int x=getcount8();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L3-3') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom8()
{
    int x=getcount8();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L3-3') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto8()
{
    int x=getcount8();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L3-3') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto8()
{
    int x=getcount8();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L3-3') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto8()
{
    int x=getcount8();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L3-3') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount9()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L4-1');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom9()
{
    int x=getcount9();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L4-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom9()
{
    int x=getcount9();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L4-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom9()
{
    int x=getcount9();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L4-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto9()
{
    int x=getcount9();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L4-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto9()
{
    int x=getcount9();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L4-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto9()
{
    int x=getcount9();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L4-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount10()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L4-2');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom10()
{
    int x=getcount10();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L4-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom10()
{
    int x=getcount10();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L4-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom10()
{
    int x=getcount10();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L4-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto10()
{
    int x=getcount10();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L4-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto10()
{
    int x=getcount10();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L4-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto10()
{
    int x=getcount10();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L4-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount11()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L5-1-1');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom11()
{
    int x=getcount11();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L5-1-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom11()
{
    int x=getcount11();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L5-1-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom11()
{
    int x=getcount11();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L5-1-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto11()
{
    int x=getcount11();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L5-1-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto11()
{
    int x=getcount11();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L5-1-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto11()
{
    int x=getcount11();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L5-1-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount12()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L5-1-2');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom12()
{
    int x=getcount12();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L5-1-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom12()
{
    int x=getcount12();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L5-1-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom12()
{
    int x=getcount12();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L5-1-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto12()
{
    int x=getcount12();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L5-1-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto12()
{
    int x=getcount12();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L5-1-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto12()
{
    int x=getcount12();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L5-1-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount13()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L5-2');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom13()
{
    int x=getcount13();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L5-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom13()
{
    int x=getcount13();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L5-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom13()
{
    int x=getcount13();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L5-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto13()
{
    int x=getcount13();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L5-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto13()
{
    int x=getcount13();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L5-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto13()
{
    int x=getcount13();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L5-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount14()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L5-3');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom14()
{
    int x=getcount14();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L5-3') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom14()
{
    int x=getcount14();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L5-3') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom14()
{
    int x=getcount14();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L5-3') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto14()
{
    int x=getcount14();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L5-3') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto14()
{
    int x=getcount14();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L5-3') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto14()
{
    int x=getcount14();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L5-3') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount15()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L5-4');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom15()
{
    int x=getcount15();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L5-4') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom15()
{
    int x=getcount15();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L5-4') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom15()
{
    int x=getcount15();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L5-4') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto15()
{
    int x=getcount15();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L5-4') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto15()
{
    int x=getcount15();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L5-4') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto15()
{
    int x=getcount15();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L5-4') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount16()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L6');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom16()
{
    int x=getcount16();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L6') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom16()
{
    int x=getcount16();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L6') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom16()
{
    int x=getcount16();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L6') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto16()
{
    int x=getcount16();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L6') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto16()
{
    int x=getcount16();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L6') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto16()
{
    int x=getcount16();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L6') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount17()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L7-1');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom17()
{
    int x=getcount17();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L7-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom17()
{
    int x=getcount17();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L7-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom17()
{
    int x=getcount17();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L7-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto17()
{
    int x=getcount17();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L7-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto17()
{
    int x=getcount17();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L7-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto17()
{
    int x=getcount17();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L7-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount18()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L7-2');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom18()
{
    int x=getcount18();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L7-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom18()
{
    int x=getcount18();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L7-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom18()
{
    int x=getcount18();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L7-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto18()
{
    int x=getcount18();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L7-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto18()
{
    int x=getcount18();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L7-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto18()
{
    int x=getcount18();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L7-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount19()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L8-1');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom19()
{
    int x=getcount19();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L8-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom19()
{
    int x=getcount19();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L8-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom19()
{
    int x=getcount19();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L8-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto19()
{
    int x=getcount19();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L8-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto19()
{
    int x=getcount19();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L8-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto19()
{
    int x=getcount19();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L8-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount20()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L8-2');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom20()
{
    int x=getcount20();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L8-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom20()
{
    int x=getcount20();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L8-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom20()
{
    int x=getcount20();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L8-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto20()
{
    int x=getcount20();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L8-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto20()
{
    int x=getcount20();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L8-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto20()
{
    int x=getcount20();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L8-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount21()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L9-1');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom21()
{
    int x=getcount21();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L9-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom21()
{
    int x=getcount21();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L9-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom21()
{
    int x=getcount21();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L9-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto21()
{
    int x=getcount21();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L9-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto21()
{
    int x=getcount21();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L9-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto21()
{
    int x=getcount21();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L9-1') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount22()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L9-2');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom22()
{
    int x=getcount22();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L9-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom22()
{
    int x=getcount22();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L9-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom22()
{
    int x=getcount22();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L9-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto22()
{
    int x=getcount22();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L9-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto22()
{
    int x=getcount22();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L9-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto22()
{
    int x=getcount22();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L9-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount23()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L10');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom23()
{
    int x=getcount23();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L10') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom23()
{
    int x=getcount23();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L10') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom23()
{
    int x=getcount23();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L10') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto23()
{
    int x=getcount23();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L10') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto23()
{
    int x=getcount23();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L10') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto23()
{
    int x=getcount23();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L10') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount24()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L11');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom24()
{
    int x=getcount24();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L11') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom24()
{
    int x=getcount24();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L11') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom24()
{
    int x=getcount24();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L11') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto24()
{
    int x=getcount24();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L11') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto24()
{
    int x=getcount24();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L11') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto24()
{
    int x=getcount24();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L11') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount25()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L12');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom25()
{
    int x=getcount25();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L12') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom25()
{
    int x=getcount25();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L12') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom25()
{
    int x=getcount25();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L12') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto25()
{
    int x=getcount25();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L12') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto25()
{
    int x=getcount25();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L12') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto25()
{
    int x=getcount25();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L12') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount26()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L13');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom26()
{
    int x=getcount26();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L13') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom26()
{
    int x=getcount26();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L13') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom26()
{
    int x=getcount26();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L13') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto26()
{
    int x=getcount26();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L13') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto26()
{
    int x=getcount26();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L13') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto26()
{
    int x=getcount26();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L13') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount27()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L13-2');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom27()
{
    int x=getcount27();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L13-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom27()
{
    int x=getcount27();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L13-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom27()
{
    int x=getcount27();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L13-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto27()
{
    int x=getcount27();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L13-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto27()
{
    int x=getcount27();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L13-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto27()
{
    int x=getcount27();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L13-2') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount28()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'L14');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom28()
{
    int x=getcount28();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'L14') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom28()
{
    int x=getcount28();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'L14') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom28()
{
    int x=getcount28();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'L14') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto28()
{
    int x=getcount28();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'L14') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto28()
{
    int x=getcount28();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'L14') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto28()
{
    int x=getcount28();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'L14') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount29()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'chazhi');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom29()
{
    int x=getcount29();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'chazhi') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom29()
{
    int x=getcount29();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'chazhi') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom29()
{
    int x=getcount29();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'chazhi') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto29()
{
    int x=getcount29();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'chazhi') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto29()
{
    int x=getcount29();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'chazhi') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto29()
{
    int x=getcount29();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'chazhi') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount30()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (jlithology = 'bujialayer');";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjeastfrom30()
{
    int x=getcount30();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (jlithology = 'bujialayer') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthfrom30()
{
    int x=getcount30();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (jlithology = 'bujialayer') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudefrom30()
{
    int x=getcount30();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (jlithology = 'bujialayer') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjeastto30()
{
    int x=getcount30();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastto from mylithologydata where (jlithology = 'bujialayer') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjnorthto30()
{
    int x=getcount30();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthto from mylithologydata where (jlithology = 'bujialayer') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto30()
{
    int x=getcount30();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata where (jlithology = 'bujialayer') order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getcount()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata;";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::getjaltitudefrom()
{
    int x=getcount();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata order by jborehole,jdepthfrom;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getjaltitudeto()
{
    int x=getcount();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudeto from mylithologydata order by jborehole,jdepthfrom;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

QString* odbchelper::getjlithology()
{
    int x=getcount();

    QString *arr = new QString[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jlithology from mylithologydata order by jborehole,jdepthfrom;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toString();
        i++;
    }

    return arr;
}

void odbchelper::addDrillingData(int a,QString b,QString c,float d,float e,float f,float g,QString h,QString i)
{
    QSqlQuery *query=new QSqlQuery(db);
    QString sql=QString("insert into mycollardata values(%1,'%2','%3',%4,%5,%6,%7,'%8','%9');")
            .arg(a).arg(b).arg(c).arg(d).arg(e).arg(f).arg(g).arg(h).arg(i);
    bool ok=0;

    if(a!=0&&b!=QString("")){
        ok=query->exec(sql);
    }

    if(ok){
        QMessageBox::about(NULL,QString("添加成功"),QString("添加数据到数据库成功"));
    }else if(!ok){
        QMessageBox::warning(NULL,QString("添加失败"),QString("添加数据到数据库失败"));
    }
}

void odbchelper::removeDrillingData(QString a)
{
    QSqlQuery *query=new QSqlQuery(db);
    QString sql=QString("delete from mycollardata where jborehole = '%1';")
            .arg(a);
    bool ok=0;

    if(a!=QString("")){
        ok=query->exec(sql);
    }

    if(ok){
        QMessageBox::about(NULL,QString("删除成功"),QString("删除数据成功"));
    }else if(!ok){
        QMessageBox::warning(NULL,QString("删除失败"),QString("删除数据失败"));
    }
}

void odbchelper::addDrillingDetail(int a, QString b, QString c, float d, float e, float f, float g, float h, float i, float j, float k, QString l, QString m, int n, float o)
{
    QSqlQuery *query=new QSqlQuery(db);
    QString sql=QString("insert into mylithologydata values(%1,'%2','%3',%4,%5,%6,%7,%8,%9,%10,%11,'%12','%13',%14,%15);")
            .arg(a).arg(b).arg(c).arg(d).arg(e).arg(f).arg(g).arg(h).arg(i).arg(j).arg(k).arg(l).arg(m).arg(n).arg(o);
    bool ok=0;

    if(a!=0&&b!=QString("")){
        ok=query->exec(sql);
    }

    if(ok){
        QMessageBox::about(NULL,QString("添加成功"),QString("添加数据到数据库成功"));
    }else if(!ok){
        QMessageBox::warning(NULL,QString("添加失败"),QString("添加数据到数据库失败"));
    }
}

void odbchelper::removeDrillingDetail(int a, QString b)
{
    QSqlQuery *query=new QSqlQuery(db);
    QString sql=QString("delete from mylithologydata where (id = %1 and jborehole = '%2');")
            .arg(a).arg(b);
    bool ok=0;

    if(a!=0&&b!=QString("")){
        ok=query->exec(sql);
    }

    if(ok){
        QMessageBox::about(NULL,QString("删除成功"),QString("删除数据成功"));
    }else if(!ok){
        QMessageBox::warning(NULL,QString("删除失败"),QString("删除数据失败"));
    }
}

int odbchelper::getsortcount1()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from mylithologydata where (lithologysort = 1);";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::geteast1()
{
    int x=getsortcount1();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from mylithologydata where (lithologysort = 1) order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getnorth1()
{
    int x=getsortcount1();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from mylithologydata where (lithologysort = 1) order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getaltitude1()
{
    int x=getsortcount1();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jaltitudefrom from mylithologydata where (lithologysort = 1) order by jborehole;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getsortcount3()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from (select jborehole,jeastfrom,jnorthfrom,max(jaltitudefrom),min(lithologysort) from (select jborehole,jeastfrom,jnorthfrom,jaltitudefrom,lithologysort from mylithologydata where (lithologysort > 1) order by jborehole,lithologysort) as test group by jborehole,jeastfrom,jnorthfrom order by jborehole,min(lithologysort)) as test2 where min=3;";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::geteast3()
{
    int x=getsortcount1();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from (select jborehole,jeastfrom,jnorthfrom,max(jaltitudefrom),min(lithologysort) from (select jborehole,jeastfrom,jnorthfrom,jaltitudefrom,lithologysort from mylithologydata where (lithologysort > 1) order by jborehole,lithologysort) as test group by jborehole,jeastfrom,jnorthfrom order by jborehole,min(lithologysort)) as test2 where min=3;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getnorth3()
{
    int x=getsortcount1();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from (select jborehole,jeastfrom,jnorthfrom,max(jaltitudefrom),min(lithologysort) from (select jborehole,jeastfrom,jnorthfrom,jaltitudefrom,lithologysort from mylithologydata where (lithologysort > 1) order by jborehole,lithologysort) as test group by jborehole,jeastfrom,jnorthfrom order by jborehole,min(lithologysort)) as test2 where min=3;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getaltitude3()
{
    int x=getsortcount1();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select max from (select jborehole,jeastfrom,jnorthfrom,max(jaltitudefrom),min(lithologysort) from (select jborehole,jeastfrom,jnorthfrom,jaltitudefrom,lithologysort from mylithologydata where (lithologysort > 1) order by jborehole,lithologysort) as test group by jborehole,jeastfrom,jnorthfrom order by jborehole,min(lithologysort)) as test2 where min=3;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getsortcount4()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from (select jborehole,jeastfrom,jnorthfrom,max(jaltitudefrom),min(lithologysort) from (select jborehole,jeastfrom,jnorthfrom,jaltitudefrom,lithologysort from mylithologydata where (lithologysort > 1) order by jborehole,lithologysort) as test group by jborehole,jeastfrom,jnorthfrom order by jborehole,min(lithologysort)) as test2 where min=4;";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::geteast4()
{
    int x=getsortcount1();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from (select jborehole,jeastfrom,jnorthfrom,max(jaltitudefrom),min(lithologysort) from (select jborehole,jeastfrom,jnorthfrom,jaltitudefrom,lithologysort from mylithologydata where (lithologysort > 1) order by jborehole,lithologysort) as test group by jborehole,jeastfrom,jnorthfrom order by jborehole,min(lithologysort)) as test2 where min=4;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getnorth4()
{
    int x=getsortcount1();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from (select jborehole,jeastfrom,jnorthfrom,max(jaltitudefrom),min(lithologysort) from (select jborehole,jeastfrom,jnorthfrom,jaltitudefrom,lithologysort from mylithologydata where (lithologysort > 1) order by jborehole,lithologysort) as test group by jborehole,jeastfrom,jnorthfrom order by jborehole,min(lithologysort)) as test2 where min=4;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getaltitude4()
{
    int x=getsortcount1();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select max from (select jborehole,jeastfrom,jnorthfrom,max(jaltitudefrom),min(lithologysort) from (select jborehole,jeastfrom,jnorthfrom,jaltitudefrom,lithologysort from mylithologydata where (lithologysort > 1) order by jborehole,lithologysort) as test group by jborehole,jeastfrom,jnorthfrom order by jborehole,min(lithologysort)) as test2 where min=4;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getsortcount5()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from (select jborehole,jeastfrom,jnorthfrom,max(jaltitudefrom),min(lithologysort) from (select jborehole,jeastfrom,jnorthfrom,jaltitudefrom,lithologysort from mylithologydata where (lithologysort > 1) order by jborehole,lithologysort) as test group by jborehole,jeastfrom,jnorthfrom order by jborehole,min(lithologysort)) as test2 where min=5;";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::geteast5()
{
    int x=getsortcount1();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from (select jborehole,jeastfrom,jnorthfrom,max(jaltitudefrom),min(lithologysort) from (select jborehole,jeastfrom,jnorthfrom,jaltitudefrom,lithologysort from mylithologydata where (lithologysort > 1) order by jborehole,lithologysort) as test group by jborehole,jeastfrom,jnorthfrom order by jborehole,min(lithologysort)) as test2 where min=5;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getnorth5()
{
    int x=getsortcount1();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from (select jborehole,jeastfrom,jnorthfrom,max(jaltitudefrom),min(lithologysort) from (select jborehole,jeastfrom,jnorthfrom,jaltitudefrom,lithologysort from mylithologydata where (lithologysort > 1) order by jborehole,lithologysort) as test group by jborehole,jeastfrom,jnorthfrom order by jborehole,min(lithologysort)) as test2 where min=5;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getaltitude5()
{
    int x=getsortcount1();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select max from (select jborehole,jeastfrom,jnorthfrom,max(jaltitudefrom),min(lithologysort) from (select jborehole,jeastfrom,jnorthfrom,jaltitudefrom,lithologysort from mylithologydata where (lithologysort > 1) order by jborehole,lithologysort) as test group by jborehole,jeastfrom,jnorthfrom order by jborehole,min(lithologysort)) as test2 where min=5;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

int odbchelper::getsortcount6()
{
    int x=0;
    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select count(*) from (select jborehole,jeastfrom,jnorthfrom,max(jaltitudefrom),min(lithologysort) from (select jborehole,jeastfrom,jnorthfrom,jaltitudefrom,lithologysort from mylithologydata where (lithologysort > 1) order by jborehole,lithologysort) as test group by jborehole,jeastfrom,jnorthfrom order by jborehole,min(lithologysort)) as test2 where min=6;";
    query1->exec(sql1);

    while (query1->next()) {
        x+=query1->value(0).toInt();
    }

    return x;
}

double* odbchelper::geteast6()
{
    int x=getsortcount1();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jeastfrom from (select jborehole,jeastfrom,jnorthfrom,max(jaltitudefrom),min(lithologysort) from (select jborehole,jeastfrom,jnorthfrom,jaltitudefrom,lithologysort from mylithologydata where (lithologysort > 1) order by jborehole,lithologysort) as test group by jborehole,jeastfrom,jnorthfrom order by jborehole,min(lithologysort)) as test2 where min=6;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getnorth6()
{
    int x=getsortcount1();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select jnorthfrom from (select jborehole,jeastfrom,jnorthfrom,max(jaltitudefrom),min(lithologysort) from (select jborehole,jeastfrom,jnorthfrom,jaltitudefrom,lithologysort from mylithologydata where (lithologysort > 1) order by jborehole,lithologysort) as test group by jborehole,jeastfrom,jnorthfrom order by jborehole,min(lithologysort)) as test2 where min=6;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}

double* odbchelper::getaltitude6()
{
    int x=getsortcount1();

    double *arr = new double[x];
    int i=0;

    QSqlQuery *query1=new QSqlQuery(db);
    QString sql1="select max from (select jborehole,jeastfrom,jnorthfrom,max(jaltitudefrom),min(lithologysort) from (select jborehole,jeastfrom,jnorthfrom,jaltitudefrom,lithologysort from mylithologydata where (lithologysort > 1) order by jborehole,lithologysort) as test group by jborehole,jeastfrom,jnorthfrom order by jborehole,min(lithologysort)) as test2 where min=6;";
    query1->exec(sql1);

    while (query1->next()&&i<x) {
        arr[i]=query1->value(0).toDouble();
        i++;
    }

    return arr;
}
