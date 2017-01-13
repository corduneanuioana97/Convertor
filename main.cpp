int main()
        {
    clrscr();

    lungime b;
    greutate c;
    vol d;
    aria e;
    temp f;
    timp g;
    viteza h;
    energie j;
    presiune k;
    densitate l;
    int x,y;
       system("COLOR 70");

    while(1)
    {
        clrscr();
        cout<<"\n      Alegeti unitatea pentru conversie"<<"\n";
        cout<<"\n  1: Lungime\n" << "  2: Arie\n"<<"  3: Volum\n"<<"  4: Timp\n"<<"  5: Viteza\n"<<"  6: Temperatura\n"<<"  7: Masa\n"<<"  8: Energia\n"<<"  9: Presiunea\n"<<"  10: Densitatea\n"<<"  11: Inchideti\n";
        cout<<"\n\nAlegeti unitatea de conversie:" ;
        cin>>x;
        if(x==1)
             {           clrscr();

                  cout<<"\n\nUnitatea de conversie:\n";

                    cout<<"\n  1 : mm-m";
                    cout<<"\n  2 : m-mm";
                    cout<<"\n  3 : cm-m";
                    cout<<"\n  4 : m-cm";
                    cout<<"\n  5 : cm_km";
                    cout<<"\n  6 : km-cm";
                    cout<<"\n  7 : m-mile";
                    cout<<"\n  8 : mile-m";
                    cout<<"\n  9 : km-mile";
                   cout<<"\n 10 : mile-km";
                   cout<<"\n 11 : feet-m";
                   cout<<"\n 12 : m-feet";
                   cout<<"\n 13 : inch-m";
                   cout<<"\n 14 : m-inch";
                   cout<<"\n 15 : yard-m";
                  cout<<"\n 16 : m-yard";
                  cout<<"\n 17 : m-nmi";
                  cout<<"\n 18 : nmi-m";
                  cout<<"\n 19 : Reveniti la meniul principal";


         while(1)
               {
                cout<<"\n\n Introduceti valoarea aleasa: ";
               cin>>y;
                switch(y)
                {
                case 1:
                    { b.mm_m(); break; }
                case 2:
                    { b.m_mm(); break;}
                case 3:
                    { b.cm_m(); break;}
                case 4:
                    { b.m_cm(); break;}
                case 5:
                    { b.cm_km(); break;}
                case 6:
                    {  b.km_cm(); break;}
                case 7:
                    {  b.m_mile(); break;}
                case 8:
                    {   b.mile_m(); break;}
                case 9:
                     {   b.km_mile(); break;}
                case 10:
                    {  b.mile_km(); break;}
                case 11:
                     {  b.feet_m(); break;}
                case 12:
                     { b.m_feet(); break;}
                case 13:
                      { b.inch_m(); break;}
                case 14:
                    { b.m_inch();break;}
                case 15:
                    {b.yard_m(); break;}
              case 16:
                    {b.m_yard(); break;}
              case 17:
                    {b.m_nmi(); break;}
              case 18:
                    {b.nmi_m(); break;}
              default: cout<<"\n   Optiune invalida!";}
              if (y==19)
                    {break;}
           }
           }
           else if(x==6)
                 {   clrscr();
                  cout<<"\n\n Unitatea de conversie:\n";

                  cout<<"\n  1: Celsius-Fahrenheit";
                  cout<<"\n  2: Fahrenheit-Celsius";
                  cout<<"\n  3: Celsius-Kelvin";
                  cout<<"\n  4: Kelvin-Celcius";
                  cout<<"\n  5: Fahrenheit-Kelvin";
                  cout<<"\n  6: Kelvin-Fahrenheit";
                  cout<<"\n  7: Inapoi la meniul principal";
          while(1)
          {
          cout<<"\n\n Introduceti valoarea= ";
            cin>>y;
            switch (y){
                case 1:
                   { f.cel_f(); break;}
                case 2:
                   {f.f_cel(); break;}
                case 3:
                   {f.cel_k(); break;}
                case 4:
                 {f.k_cel(); break;}
                case 5:
                {
                    f.f_k(); break;
                }
                case 6:
                {
                    f.k_f(); break;
                }
                default : cout<<"\n   Optiune invalida";}
                if(y==7)
                    {break;}
            }
            }
            else if(x==7)
            {                  clrscr();
             cout<<"\n\nUnitatea de conversie:\n";

             cout<<"\n  1: Mg-G";
             cout<<"\n  2: G-Mg";
             cout<<"\n  3: G-Kg";
             cout<<"\n  4: Kg-G";
             cout<<"\n  5: pound-kg";
             cout<<"\n  6: kg-pound";
             cout<<"\n  7: g-Pound";
             cout<<"\n  8: Pound-g";
             cout<<"\n  9: kg-tona";
            cout<<"\n 10: tona-kg";
            cout<<"\n 11: g-Uncie";
            cout<<"\n 12: Uncie-g";
            cout<<"\n 13: Inapoi la meniul principal";

           while(1)
             {
              cout<<"\n\nIntroduceti valoarea ";
              cin>>y;
              switch (y){
             case 1:
                {c.milligm_gm(); break;}
             case 2:
                {c.gm_milligm(); break;}
             case 3:
                {c.gm_kg(); break;}
             case 4:
                {c.kg_gm(); break;}
             case 5:
                {c.pound_kg(); break;}
             case 6:
                {c.kg_pound(); break;}
             case 7:
                {c.gm_pound(); break;}
             case 8:
                {c.pound_gm(); break;}
             case 9:
                {c.kg_mton(); break;}
             case 10:
                {c.mton_kg(); break;}
             case 11:
             {
                 c.gm_ounces(); break;
             }
             case 12:
             {
                 c.ounces_gm(); break;
             }}
             if (y==13)
                {break;}
        }
        }
        else if(x==2)
                {             clrscr();
                cout<<"\n\nUnitatea de conversie:\n";

                cout<<"\n   1: mm patrati- cm patrati";
                cout<<"\n   2: cm patrati- mm patrati";
                cout<<"\n   3: cm patrati- m patrati";
                cout<<"\n   4: m patrati - cm patrati";
                cout<<"\n   5: m patrati - km patrati";
                cout<<"\n   6: km patrati- m patrati";
                cout<<"\n   7: Square feet- m patrati";
                cout<<"\n   8: m patrati - Square feet";
                cout<<"\n   9: Square Yard- m patrati";
                cout<<"\n  10: m patrati -Square yard";
                cout<<"\n  11: Square mile- km patrati";
                cout<<"\n  12: km patrati-Square mile";
                cout<<"\n  13: Acri-Hectare";
                cout<<"\n  14: Hectare-Acri";
                cout<<"\n  15: km patrati-Acri ";
                cout<<"\n  16: Acri- km patrati";
                cout<<"\n  17: m patrati-Square Yards";
                cout<<"\n  18: Square Yards- m patrati";
                cout<<"\n  19: Inapoi la meniul principal";

            while(1)
            {
            cout<<"\n\nIntroduceti valoarea ";
              cin>>y;
                switch (y){
                case 1:
                  {e.mmSq_cmSq(); break;}
                case 2:
                {e.cmSq_mmSq(); break;}
                case 3:
                {e.cmSq_mSq(); break;}
                case 4:
                {e.mSq_cmSq(); break;}
                case 5:
                {e.mSq_kmSq(); break;}
                case 6:
                {e.kmSq_mSq(); break;}
                case 7:
                {e.feetSq_mSq(); break;}
                case 8:
                {e.mSq_feetSq(); break;}
                case 9:
                {e.yardSq_mSq(); break;}
                case 10:
                {e.mSq_yardSq(); break;}
                case 11:
                {e.mileSq_kmSq(); break;}
                case 12:
                {e.kmSq_mileSq(); break;}
                case 13:
                {e.acre_hect(); break;}
                case 14:
                {e.hect_acre(); break;}
                case 15:
                {e.kmSq_acre(); break;}
                case 16:
                {e.acre_kmSq(); break;}
                case 17:
                {
                    e.mp_ydp(); break;
                }
                case 18:
                {
                    e.ydp_mp(); break;
                }}
                if(y==19)
                {break;}
            }
            }
        else if(x==3)
            {           clrscr();
               cout<<"\n\nUnitatea de conversie:\n";

               cout<<"\n   1 : ml-Litru";
               cout<<"\n   2 : Litru-ml";
               cout<<"\n   3 :  mm cubi-cm cubi";
               cout<<"\n   4 :  cm cubi- mm cubi";
               cout<<"\n   5 :  cm cubi- m cubi";
               cout<<"\n   6 :  m cubi- cubi cm";
               cout<<"\n   7 : Cubic Inch- m cubi";
               cout<<"\n   8 : m cubi-Cubic Inch";
               cout<<"\n   9 : Cubic feet- m cubi";
               cout<<"\n  10 : m cubi-Cubic feet";
               cout<<"\n  11 : m cubi-Galon";
               cout<<"\n  12 : Galon- m cubi";
               cout<<"\n  13 : Litru-Galon";
               cout<<"\n  14 : Galon-Litru";
               cout<<"\n  15 : Inapoi la meniul principal";


            while(1)
             { cout<<"\n\nIntroduceti valoarea ";
              cin>>y;
              switch(y){
                case 1:
                  {d.mL_L(); break;}
             case 2:
                  {d.L_mL(); break;}
             case 3:
                  {d.mmQ_cmQ(); break;}
            case 4:
                  {d.cmQ_mmQ(); break;}
            case 5:
                  {d.cmQ_mQ(); break;}
            case 6:
                  {d.mQ_cmQ(); break;}
            case 7:
                  {d.inchQ_mQ(); break;}
            case 8:
                  {d.mQ_inchQ(); break;}
            case 9:
                  {d.feetQ_mQ(); break;}
            case 10:
                  {d.mQ_feetQ(); break;}
            case 11:
                  {d.mQ_gallon(); break;}
            case 12:
                  {d.gallon_mQ(); break;}
            case 13:
                {d.L_gallon(); break;}
            case 14:
                {d.gallon_L(); break;}
            default: cout<<"\n  Optiune invalida!";}
             if(y==15)
                {break;}
           }
           }
          else if(x==4)
            {           clrscr();
               cout<<"\n\nUnitatea de conversie:\n";

               cout<<"\n   1 : Ore-Minute";
               cout<<"\n   2 : Minute-Ore";
               cout<<"\n   3 : Minute-Secunde";
               cout<<"\n   4 : Secunde-Minute";
               cout<<"\n   5 : Ore-Secunde";
               cout<<"\n   6 : Secunde-Ore";
               cout<<"\n   7 : Zile-Ore";
               cout<<"\n   8 : Zile-Minute";
               cout<<"\n   9 : Zile-Secunde";
               cout<<"\n  10 : Ore-Zile";
               cout<<"\n  11 : Minute-Zile";
               cout<<"\n  12 : Secunde-Zile";
               cout<<"\n  13 : Inapoi la meniul principal";


            while(1)
             { cout<<"\n\nIntroduceti valoarea= ";
              cin>>y;
              switch (y){
                case 1:
                  {g.ore_min(); break;}
             case 2:
                  {g.min_ore(); break;}
             case 3:
                  {g.min_sec(); break;}
            case 4:
                  {g.sec_min(); break;}
            case 5:
                  {g.ore_sec(); break;}
            case 6:
                  {g.sec_ore(); break;}
            case 7:
                  {g.zile_ore(); break;}
            case 8:
                  {g.zile_min(); break;}
            case 9:
                  {g.zile_sec(); break;}
            case 10:
                  {g.ore_zile(); break;}
            case 11:
                  {g.min_zile(); break;}
            case 12:
                  {g.sec_zile(); break;}
            default: cout<<"\n   Optiune invalida!";}
            if(y==13)
                {break;}
           }
           }
        else if(x==5)
            {           clrscr();
               cout<<"\n\nUnitatea de conversie:\n";

               cout<<"\n   1 : kmh-mh";
               cout<<"\n   2 : mh-kmh";
               cout<<"\n   3 : kmh-kms";
               cout<<"\n   4 : kms-kmh";
               cout<<"\n   5 : kmh-fth";
               cout<<"\n   6 : fth-kmh";
               cout<<"\n   7 : kmh-mph";
               cout<<"\n   8 : mph-kmh";
               cout<<"\n   9 : kmh-ydh";
               cout<<"\n  10 : ydh-kmh";
               cout<<"\n  11 : Inapoi la meniul principal";


            while(1)
             { cout<<"\n\nIntroduceti valoarea= ";
              cin>>y;
              switch (y){
                case 1:
                  {h.kmh_mh(); break;}
             case 2:
                  {h.mh_kmh(); break;}
             case 3:
                  {h.kmh_kms(); break;}
            case 4:
                  {h.kms_kmh(); break;}
            case 5:
                  {h.kmh_fth(); break;}
            case 6:
                  {h.fth_kmh(); break;}
            case 7:
                  {h.kmh_milh(); break;}
            case 8:
                  {h.milh_kmh(); break;}
            case 9:
                  {h.kmh_ydh(); break;}
            case 10:
                  {h.ydh_kmh(); break;}
            default: cout<<"\n   Optiune invalida!";}
            if(y==11)
                {break;}
           }
           }
        else if(x==8)
            {           clrscr();
               cout<<"\n\nUnitatea de conversie:\n";

               cout<<"\n   1 : joul-calorie";
               cout<<"\n   2 : calorie-joul";
               cout<<"\n   3 : joul-kilojoul";
               cout<<"\n   4 : kilojoul-joul";
               cout<<"\n   5 : joul-BTU";
               cout<<"\n   6 : BTU-joul";
               cout<<"\n   7 : calorie-kilocalorie";
               cout<<"\n   8 : kilocalorie-calorie";
               cout<<"\n   9 : BTU-calorie";
               cout<<"\n  10 : calorie-BTU";
               cout<<"\n  11 : Inapoi la meniul principal";


            while(1)
             { cout<<"\n\nIntroduceti valoarea= ";
              cin>>y;
              switch (y){
                case 1:
                  {j.j_cal(); break;}
             case 2:
                  {j.cal_j(); break;}
             case 3:
                  {j.j_kj(); break;}
            case 4:
                  {j.kj_j(); break;}
            case 5:
                  {j.j_btu(); break;}
            case 6:
                  {j.btu_j(); break;}
            case 7:
                  {j.cal_kcal(); break;}
            case 8:
                  {j.kcal_cal(); break;}
            case 9:
                  {j.btu_cal(); break;}
            case 10:
                  {j.cal_btu(); break;}
            default: cout<<"\n   Optiune invalida!";}
            if(y==11)
                {break;}
           }
           }
        else if(x==9)
            {           clrscr();
               cout<<"\n\nUnitatea de conversie:\n";

               cout<<"\n   1 : atm-bar";
               cout<<"\n   2 : atm-Pa";
               cout<<"\n   3 : atm-mmHg";
               cout<<"\n   4 : bar-atm";
               cout<<"\n   5 : bar-mmHg";
               cout<<"\n   6 : bar-Pa";
               cout<<"\n   7 : Pa-bar";
               cout<<"\n   8 : Pa-atm";
               cout<<"\n   9 : Pa-mmHg";
               cout<<"\n  10 : mmHg-Pa";
               cout<<"\n  11 : mmHg-atm";
               cout<<"\n  12 : mmHg-bar";
               cout<<"\n  13 : Inapoi la meniul principal";


            while(1)
             { cout<<"\n\nIntroduceti valoarea= ";
              cin>>y;
              switch (y){
                case 1:
                  {k.atm_bar(); break;}
             case 2:
                  {k.atm_Pa(); break;}
             case 3:
                  {k.atm_mmhg(); break;}
            case 4:
                  {k.bar_atm(); break;}
            case 5:
                  {k.bar_mmhg(); break;}
            case 6:
                  {k.bar_Pa(); break;}
            case 7:
                  {k.Pa_bar(); break;}
            case 8:
                  {k.Pa_atm(); break;}
            case 9:
                  {k.Pa_mmhg(); break;}
            case 10:
                  {k.mmhg_Pa(); break;}
            case 11:
                  {k.mmhg_atm(); break;}
            case 12:
                  {k.mmhg_bar(); break;}
            default: cout<<"\n   Optiune invalida!";}
            if(y==13)
                {break;}
           }
           }

    else if(x==10)
            {           clrscr();
               cout<<"\n\nUnitatea de conversie:\n";

               cout<<"\n   1 : kg/m^3-g/m^3";
               cout<<"\n   2 : g/m^3-kg/m^3";
               cout<<"\n   3 : kg/m^3-lb/ft^3";
               cout<<"\n   4 : kg/m^3-oz/ft^3";
               cout<<"\n   5 : oz/ft^3-g/m^3";
               cout<<"\n   6 : oz/ft^3-kg/m^3";
               cout<<"\n   7 : lb/ft^3-kg/m^3";
               cout<<"\n   8 : lb/ft^3-g/m^3";
               cout<<"\n   9 : lb/ft^3-oz/ft^3";
               cout<<"\n  10 : oz/ft^3-lb/ft^3";
               cout<<"\n  11 : Inapoi la meniul principal";


            while(1)
             { cout<<"\n\nIntroduceti valoarea= ";
              cin>>y;
              switch (y){
                case 1:
                  {l.kg_g(); break;}
             case 2:
                  {l.g_kg(); break;}
             case 3:
                  {l.kg_lb(); break;}
            case 4:
                  {l.kg_oz(); break;}
            case 5:
                  {l.oz_g(); break;}
            case 6:
                  {l.oz_kg(); break;}
            case 7:
                  {l.lb_kg(); break;}
            case 8:
                  {l.lb_g(); break;}
            case 9:
                  {l.lb_oz(); break;}
            case 10:
                  {l.oz_lb(); break;}
            default: cout<<"\n   Optiune invalida!";}
            if(y==11)
                {break;}
           }
           }
        else if(x==11){ break;}

                }


         }
