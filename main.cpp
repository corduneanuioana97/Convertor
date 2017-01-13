#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void clrscr()
{
   system("cls");
}

class input
{
  public:
        double i;



};



  class lungime:public input
  {
   public:
       void mm_m();
       void m_mm();
       void cm_m();
       void m_cm();
       void cm_km();
       void km_cm();
       void m_mile();
       void mile_m();
       void km_mile();
       void mile_km();
       void feet_m();
       void m_feet();
       void inch_m();
       void m_inch();
       void yard_m();
       void m_yard();
       void m_nmi();
       void nmi_m();

      };

class temp:public input
 {
 public:
       void cel_f();
       void f_cel();
       void cel_k();
       void k_cel();
       void f_k();
       void k_f();

  };

  class greutate:public input
    {
    public:
       void milligm_gm();
       void gm_milligm();
       void gm_kg();
       void kg_gm();
       void kg_mton();
       void mton_kg();
       void pound_kg();
       void kg_pound();
       void gm_pound();
       void pound_gm();
       void gm_ounces();
       void ounces_gm();

    };

   class aria :public input
   {
   public:
       void mmSq_cmSq();
       void cmSq_mmSq();
       void cmSq_mSq ();
       void mSq_cmSq ();
       void mSq_kmSq ();
       void kmSq_mSq ();
       void feetSq_mSq();
       void mSq_feetSq();
       void yardSq_mSq();
       void mSq_yardSq();
       void mileSq_kmSq();
       void kmSq_mileSq();
       void acre_kmSq();
       void kmSq_acre();
       void acre_hect();
       void hect_acre();
       void mp_ydp();
       void ydp_mp();
        };

   class vol:public input
   {
   public:
       void mL_L();
       void L_mL();
       void mmQ_cmQ();
       void cmQ_mmQ();
       void cmQ_mQ ();
       void mQ_cmQ ();
       void inchQ_mQ();
       void mQ_inchQ();
       void feetQ_mQ();
       void mQ_feetQ();
       void mQ_gallon();
       void gallon_mQ();
       void L_gallon();
       void gallon_L();

   };
   class  timp:public input
   {
   public:
       void ore_min();
       void min_ore();
       void min_sec();
       void sec_min();
       void ore_sec();
       void sec_ore();
       void zile_min();
       void zile_ore();
       void zile_sec();
       void min_zile();
       void ore_zile();
       void sec_zile();
   };
   class viteza:public input
   {
   public:
    void kmh_mh();
    void mh_kmh();
    void kmh_kms();
    void kms_kmh();
    void kmh_fth();
    void fth_kmh();
    void kmh_milh();
    void milh_kmh();
    void kmh_ydh();
    void ydh_kmh();
   };

   class energie: public input
   {
       public:
           void j_cal();
           void cal_j();
           void j_kj();
           void kj_j();
           void j_btu();
           void btu_j();
           void cal_kcal();
           void kcal_cal();
           void btu_cal();
           void cal_btu();
   };

   class densitate: public input{
       public:
           void kg_g();
           void g_kg();
           void kg_lb();
           void kg_oz();
           void oz_g();
           void oz_kg();
           void lb_kg();
           void lb_g();
           void lb_oz();
           void oz_lb();

   };

   class presiune: public input{
       public:
            void atm_bar();
           void atm_Pa();
           void atm_mmhg();
           void bar_atm();
           void bar_mmhg();
           void bar_Pa();
           void Pa_bar();
           void Pa_atm();
           void Pa_mmhg();
           void mmhg_Pa();
           void mmhg_atm();
           void mmhg_bar();
   };
     void lungime ::mm_m()
         {
          cout<<"\n   Millimeter= ";
          cin>>i;
          cout<<"\n   Meter= "<<i*.001;
          }
     void lungime ::m_mm()
         {
         cout<<"\n   metri= ";
         cin>>i;
         cout<<"\n   millimetri= "<<i*1000;
         }
     void lungime ::cm_m()
         {
          cout<<"\n   Centimetri= ";
          cin>>i;
          cout<<"\n   Metri= "<<i*.01;
          }
    void lungime ::m_cm()
        {
         cout<<"\n   metri= ";
         cin>>i;
         cout<<"\n   cm= "<<i*100;
         }
    void lungime::m_mile()
         {
         cout<<"\n   metri= ";
         cin>>i;
         cout<<"\n   mile= "<<i*.00062;
         }
    void lungime::mile_m()
        {
        cout<<"\n   mile= ";
        cin>>i;
        cout<<"\n   metri= "<<i*1609.344;
        }
     void lungime :: cm_km()
        {
         cout<<"\n   cm= ";
         cin>>i;
         cout<<"\n   km= "<<i*0.00001;

        }

    void lungime :: km_cm()
        {   cout<<"\n   km= ";
           cin>>i;
           cout<<"\n   cm= "<<i*100000;
        }
    void lungime::feet_m()
        {
        cout<<"\n   feet= ";
        cin>>i;
        cout<<"\n   metri= "<<i*.3048;
        }
    void lungime::m_feet()
        {
        cout<<"\n   metri= ";
        cin>>i;
        cout<<"\n   feet= "<<i*3.28084;
        }
    void lungime::yard_m()
        {
        cout<<"\n   yard= ";
        cin>>i;
        cout<<"\n   metri= " <<i*0.9144;
        }
    void lungime::m_yard()
        {
        cout<<"\n   metri= ";
        cin>>i;
        cout<<"\n   yard= "<<i*1.09361;
        }
    void lungime::inch_m()
        {
        cout<<"\n   inch=";
        cin>>i;
        cout<<"\n   metri="<<i*.0254;
        }
    void lungime::m_inch()
        {
        cout<<"\n   metri=";
        cin>>i;
        cout<<"\n   inch="<<i*39.37008;
        }
    void lungime ::km_mile()
        {
        cout<<"\n   kilometri=";cin>>i;
        cout<<"\n   mile="<<i*.6213712 ;
        }
    void lungime ::mile_km( )
        {
        cout<<"\n   mile="; cin>>i;
        cout<<"\n   kilometri="<<i*1.60934;
        }
    void lungime ::m_nmi( )
    {
        cout<<"\n   metri="; cin>>i;
        cout<<"\n   mile nautice="<<i*0.0005399568;
    }
    void lungime ::nmi_m( )
    {
        cout<<"\n   mile nautice="; cin>>i;
        cout<<"\n   metri="<<i*1852;
    }



    void temp::cel_f()
       {
       cout<<"\n   Celsius= ";
       cin>>i;
        cout<<"\n   Fahrenheit= " <<(((9*i)/5)+32);
       }
    void temp::f_cel()
       {
       cout<<"\n   Fahrenheit= ";   cin>>i;
       cout<<"\n   Celsius= "<<(((i-32)/9)*5);
        }
    void temp::cel_k()
        {
        cout<<"\n   celsius= ";cin>>i;
        cout<<"\n   kelvin= "<<i+273;
        }
    void temp::k_cel()
        {
        cout<<"\n   kelvin= ";  cin>>i;
        cout<<"\n   celsius= "<<i-273;
        }
    void temp::f_k()
        {
        cout<<"\n   Fahrenheit= ";  cin>>i;
        cout<<"\n   Kelvin= "<<(i+459.67)*5/9;
        }
    void temp::k_f()
    {
        cout<<"\n   Kelvin="; cin>>i;
        cout<<"\n   Fahrenheit="<<i*9/5-459.67;
    }



    void greutate::milligm_gm()
        {
        cout<<"\n   miligrame= ";cin>>i;
        cout<<"\n   grame= "<<i*.001;
        }
    void greutate::gm_milligm()
        {
        cout<<"\n   grame= "; cin>>i;
        cout<<"\n   miligrame= "<<i*1000;
        }
    void greutate::pound_kg()
       {
       cout<<"\n   pound= "; cin>>i;
       cout<<"\n   kilograme= "<<i*.45359;
       }
     void greutate::gm_kg()
        { cout<<"\n   Grame= ";cin>>i;
         cout<<"\n   kilograme= "<<i*.001;
         }
     void greutate::kg_gm()
    {    cout<<"\n   kilograme= ";cin>>i;
        cout<<"\n   Grame= "<<i*1000;
        }


    void greutate::kg_pound()
      {
      cout<<"\n   kilograme= ";cin>>i;
      cout<<"\n   pound= "<<2.20462*i;
      }
    void greutate::gm_pound()
      {
      cout<<"\n   grame= ";  cin>>i;
      cout<<"\n   pound= "<<i*.0022;
      }
    void greutate::pound_gm()
      {
      cout<<"\n   pound= "; cin>>i;
      cout<<"\n   grame= "<<i*453.59237;
      }
    void greutate::kg_mton()
      {
      cout<<"\n   kilograme= ";cin>>i;
      cout<<"\n   tone= "<<i*.001;
       }
    void greutate::mton_kg()
      {
     cout<<"\n   tone= "; cin>>i;
     cout<<"\n   kilograme= "<<i*1000;
      }
    void greutate::gm_ounces()
    {
        cout<<"\n   grame= "; cin>>i;
        cout<<"\n   uncie= "<<i*0.035274;
    }
     void greutate::ounces_gm()
    {
        cout<<"\n   uncie= "; cin>>i;
        cout<<"\n   grame= "<<i*28.34952;
    }


    void aria::mmSq_cmSq()
        {
        cout<<"\n   mm patrati= ";cin>>i;
        cout<<"\n   cm patrati= "<<i*.01;
        }
    void aria::cmSq_mmSq()
        {
        cout<<"\n   cm patrati= ";cin>>i;
        cout<<"\n   mm patrati= "<<i*100;
        }
    void aria::cmSq_mSq()
        {
        cout<<"\n   cm patrati= ";cin>>i;
        cout<<"\n   m patrati= "<<i*.0001;
        }
    void aria::mSq_cmSq()
        {
        cout<<"\n   m patrati= "; cin>>i;
        cout<<"\n   cm patrati= "<<i*10000;
        }
    void aria::mSq_kmSq()
        {
        cout<<"\n   m patrati= "; cin>>i;
        cout<<"\n   km patrati= "<<i*.000001;
        }
    void aria::kmSq_mSq()
        {
        cout<<"\n   km patrati= ";cin>>i;
        cout<<"\n   m patrati= "<<i*1000000;
        }
    void aria::feetSq_mSq()
      {
      cout<<"\n   square feet= ";cin>>i;
      cout<<"\n   m patrati= "<<i*.0929;
      }
    void aria::mSq_feetSq()
      {
      cout<<"\n   m patrati= ";  cin>>i;
      cout<<"\n   square feet= "<<i*10.76391;
      }
    void aria::yardSq_mSq()
      {
      cout<<"\n   square yard= ";cin>>i;
      cout<<"\n   m patrati= "<<i*.83613;
      }
     void aria::mSq_yardSq()
       {
        cout<<"\n   m patrati= "; cin>>i;
        cout<<"\n   square yard= "<<i*1.19599;
       }
     void aria::mileSq_kmSq()
        {
        cout<<"\n   square mile= ";cin>>i;
        cout<<"\n   km patrati= "<<i*2.5899;
        }
     void aria::kmSq_mileSq()
        {
         cout<<"\n   km patrati= " ;cin>>i;
          cout<<"\n   square mile= "<<i*.3861;
        }
     void aria::acre_hect()
        {
        cout<<"\n   Acri= ";   cin>>i;
        cout<<"\n   Hectare= "<<i*.40469;
        }
     void aria::hect_acre()
        {
        cout<<"\n   Hectare= ";cin>>i;
        cout<<"\n   Acri= " <<i*2.47105;
        }
      void aria::acre_kmSq()
         {cout<<"\n   Acri= ";cin>>i;
         cout<<"\n   km patrati= "<<i*.00405;
         }
      void aria::kmSq_acre()
      {
       cout<<"\n   km patrati= ";cin>>i;
       cout<<"\n   Acri= "<<i*247.10538;
       }
       void aria::mp_ydp()
      {
       cout<<"\n   m patrati= ";cin>>i;
       cout<<"\n   Square Yards= "<<i*1.1960;
       }
        void aria::ydp_mp()
      {
       cout<<"\n   Square Yards= ";cin>>i;
       cout<<"\n   m patrati= "<<i/1.1960;
       }

     void vol::mL_L()
         {
         cout<<"\n   mililitru= ";cin>>i;
         cout<<"\n   Litru= "<<i*.001;
         }
      void vol::L_mL()
         {         cout<<"\n   Litru= "; cin>>i;
         cout<<"\n   mililitru= "<<i*1000;
         }
     void vol::cmQ_mmQ()
         {
          cout<< "\n   cm cubi= "; cin>>i;
          cout<<"\n   mm cubi= "<<i*1000;
          }
     void vol::mmQ_cmQ()
         {
         cout<<"\n   mm cubi= ";   cin>>i;
         cout<<"\n   cm cubi= "<<i*.001;
         }
     void vol::cmQ_mQ()
        {
        cout<<"\n   cm cubi= ";  cin>>i;
        cout<<"\n   m cubi= "<<i*.000001;
        }
     void vol::mQ_cmQ()
        {
        cout<<"\n   m cubi= "; cin>>i;
        cout<<"\n   cm cubi= "<<i*1000000;
        }
     void vol::inchQ_mQ()
       {
       cout<<"\n   cubic inch= ";  cin>>i;
       cout<<"\n   m cubi= "<<i*.00002;
       }
     void vol::mQ_inchQ()
       {
       cout<<"\n   m cubi= "; cin>>i;
       cout<<"\n   cubic inch= "<<i*61023.74409;
       }
     void vol::feetQ_mQ()
      {
       cout<<"\n   cubic feet= "; cin>>i;
       cout<<"\n   m cubi= "<<i*1222 ;

      }
     void vol::mQ_feetQ()
       {
       cout<<"\n   m cubi= ";cin>>i;
       cout<<"\n   cubic feet= "<<i*123;
       }
     void vol::mQ_gallon()
       {
       cout<<"\n   m cubi= ";cin>>i;
       cout<<"\n   galon= "<<i*264.17205;
       }
     void vol::gallon_mQ()
       {
       cout<<"\n   Galon= "; cin>>i;
       cout<<"\n   m cubi= "<<i*.00379;
       }
     void vol::L_gallon()
        {
        cout<<"\n   Litru= ";cin>>i;
        cout<<"\n   galon= "<<i*.21997;
        }
    void vol::gallon_L()
        {
        cout<<"\n   Galon= "; cin>>i;
        cout<<"\n   Litru= "<<i*4.54609;
        }
    void timp::ore_min()
    {
        cout<<"\n   Ore="; cin>>i;
        cout<<"\n   Minute="<<i*60;
    }
    void timp::min_ore()
    {
        cout<<"\n   Minute="; cin>>i;
        cout<<"\n   Ore="<<i/60;
    }
    void timp::min_sec()
    {
        cout<<"\n   Minute="; cin>>i;
        cout<<"\n   Secunde="<<i*60;
    }
    void timp::sec_min()
    {
        cout<<"\n    Secunde="; cin>>i;
        cout<<"\n    Minute="<<i/60;
    }
    void timp::ore_sec()
    {
        cout<<"\n   Ore="; cin>>i;
        cout<<"\n   Secunde="<<i*3600;
    }
    void timp::sec_ore()
    {
        cout<<"\n   Secunde="; cin>>i;
        cout<<"\n   Ore="<<i/3600;
    }
    void timp::zile_min()
    {
        cout<<"\n   Zile="; cin>>i;
        cout<<"\n   Minute="<<i*24*60;
    }
    void timp::zile_ore()
    {
        cout<<"\n   Zile="; cin>>i;
        cout<<"\n   Ore="<<i*24;
    }
    void timp::zile_sec()
    {
        cout<<"\n   Zile="; cin>>i;
        cout<<"\n   Secunde="<<i*24*3600;
    }
     void timp::ore_zile()
    {
        cout<<"\n   Ore="; cin>>i;
        cout<<"\n   Zile="<<i/24;
    }
    void timp::min_zile()
    {
        cout<<"\n   Minute="; cin>>i;
        cout<<"\n   Zile="<<i/60/24;
    }
    void timp::sec_zile()
    {
        cout<<"\n   Secunde="; cin>>i;
        cout<<"\n   Zile="<<i/3600/24;
    }

    void viteza::fth_kmh()
    {
        cout<<"\n   Viteza in fth="; cin>>i;
        cout<<"\n   Viteza in kmh="<<i*0.0003048;
    }
    void viteza::kmh_fth()
    {
        cout<<"\n   Viteza in kmh="; cin>>i;
        cout<<"\n   Viteza in fth="<<i/0.0003048;
    }
    void viteza::kmh_kms()
    {
        cout<<"\n   Viteza in kmh="; cin>>i;
        cout<<"\n   Viteza in kms="<<i/3600;
    }
    void viteza::kms_kmh()
    {
        cout<<"\n   Viteza in kms="; cin>>i;
        cout<<"\n   Viteza in kmh="<<i*3600;
    }
    void viteza::kmh_mh()
    {
        cout<<"\n   Viteza in kmh="; cin>>i;
        cout<<"\n   Viteza in mh="<<i*1000;
    }
        void viteza::mh_kmh()
    {
        cout<<"\n   Viteza in mh="; cin>>i;
        cout<<"\n   Viteza in kmh="<<i/1000;
    }
        void viteza::kmh_milh()
    {
        cout<<"\n   Viteza in kmh="; cin>>i;
        cout<<"\n   Viteza in milh="<<i/1.6;
    }
        void viteza::milh_kmh()
    {
        cout<<"\n   Viteza in milh="; cin>>i;
        cout<<"\n   Viteza in kmh="<<i*1.6;
    }
        void viteza::kmh_ydh()
    {
        cout<<"\n   Viteza in kmh="; cin>>i;
        cout<<"\n   Viteza in ydh="<<i*1093.6133;
    }
     void viteza::ydh_kmh()
    {
        cout<<"\n   Viteza in ydh="; cin>>i;
        cout<<"\n   Viteza in kmh="<<i/1093.6133;
    }
    void energie::j_cal()
    {
        cout<<"Energia in Jouli="; cin>>i;
        cout<<"Energia in calorii="<<i*0.23884;
    }
    void energie::cal_j()
    {
        cout<<"Energia in calorii="; cin>>i;
        cout<<"Energia in Jouli="<<i/0.23884;
    }
    void energie::j_kj()
    {
        cout<<"Energia in Jouli="; cin>>i;
        cout<<"Energia in KiloJouli="<<i*1000;
    }
    void energie::kj_j()
    {
        cout<<"Energia in KiloJouli="; cin>>i;
        cout<<"Energia in Jouli="<<i/1000;
    }
    void energie::j_btu()
    {
        cout<<"Energia in Jouli="; cin>>i;
        cout<<"Energia in BTU="<<i*0.0009478;
    }
    void energie::btu_j()
    {
        cout<<"Energia in Jouli="; cin>>i;
        cout<<"Energia in BTU="<<i/0.0009478;
    }
    void energie::cal_kcal()
    {
        cout<<"Energia in calorii="; cin>>i;
        cout<<"Energia in Kilocalorii="<<i*1000;
    }
    void energie::kcal_cal()
    {
        cout<<"Energia in Kilocalorii="; cin>>i;
        cout<<"Energia in calorii="<<i/1000;
    }
    void energie::btu_cal()
    {
        cout<<"Energia in BTU="; cin>>i;
        cout<<"Energia in calorii="<<i*251.99;
    }
     void energie::cal_btu()
    {
        cout<<"Energia in BTU="; cin>>i;
        cout<<"Energia in calorii="<<i/251.99;
    }
    void presiune::atm_Pa()
    {
        cout<<"Atmosfere="; cin>>i;
        cout<<"Pascali="<<i*101325.273;
    }
     void presiune::atm_bar()
    {
        cout<<"Atmosfere="; cin>>i;
        cout<<"Bar="<<i*1.03393;
    }
    void presiune::atm_mmhg()
    {
        cout<<"Atmosfere="; cin>>i;
        cout<<"Bar="<<i*760.002;
    }
    void presiune::bar_atm()
    {
        cout<<"Bar="; cin>>i;
        cout<<"Atmosfere="<<i/1.03393;
    }
    void presiune::bar_Pa()
    {
        cout<<"Bar="; cin>>i;
        cout<<"Pascal="<<i*98000;
    }
    void presiune::bar_mmhg()
    {
        cout<<"Bar="; cin>>i;
        cout<<"mmHg="<<i*735.060;
    }
    void presiune::Pa_mmhg()
    {
        cout<<"Pascal="; cin>>i;
        cout<<"mmHg="<<i*0.0075;
    }
    void presiune::Pa_bar()
    {
        cout<<"Pascal="; cin>>i;
        cout<<"bar="<<i/98000;
    }
    void presiune::Pa_atm()
    {
        cout<<"Pascal="; cin>>i;
        cout<<"atmosfere="<<i/101325.273;
    }
    void presiune::mmhg_Pa()
    {
        cout<<"mmhg="; cin>>i;
        cout<<"Pascal="<<i/0.0075;
    }
    void presiune::mmhg_bar()
    {
        cout<<"mmhg="; cin>>i;
        cout<<"Bar="<<i/735.060;
    }
    void presiune::mmhg_atm()
    {
        cout<<"mmhg="; cin>>i;
        cout<<"Bar="<<i/760.002;
    }
    void densitate::kg_g()
    {
        cout<<"kg/m^3="; cin>>i;
        cout<<"g/m^3="<<i*1000;
    }
    void densitate::kg_lb()
    {
        cout<<"kg/m^3="; cin>>i;
        cout<<"lb/ft^3="<<i*0.06243;
    }
    void densitate::kg_oz()
    {
        cout<<"kg/m^3="; cin>>i;
        cout<<"oz/ft^3="<<i*0.9988;
    }
    void densitate::g_kg()
    {
        cout<<"g/m^3="; cin>>i;
        cout<<"kg/m^3="<<i/1000;
    }
    void densitate::lb_kg()
    {
        cout<<"lb/ft^3="; cin>>i;
        cout<<"kg/m^3="<<i/0.06243;
    }
    void densitate::lb_oz()
    {
        cout<<"lb/ft^3="; cin>>i;
        cout<<"oz/ft^3="<<i*15.9994;
    }
    void densitate::lb_g()
    {
        cout<<"lb/ft^3="; cin>>i;
        cout<<"g/m^3="<<i*16017.94;
    }
    void densitate::oz_kg()
    {
        cout<<"oz/ft^3="; cin>>i;
        cout<<"kg/m^3="<<i/0.9988;
    }
    void densitate::oz_lb()
    {
        cout<<"oz/ft^3="; cin>>i;
        cout<<"lb/ft^3="<<i/15.9994;
    }
    void densitate::oz_g()
    {
        cout<<"oz/ft^3="; cin>>i;
        cout<<"g/m^3="<<i*1001.15;
    }
