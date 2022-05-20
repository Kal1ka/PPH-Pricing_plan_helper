#include "Menu.hpp"
#include "about_operators.hpp"
#include "counting_for.hpp"
#include <iostream>
using namespace std;

int comparison(int* tele2, int* mts, int* megafon, int* beeline, int* yota)
{
    // 0
    int imax_fortele2 = 0, max_fortele2 = 0;
    counting_for_tele2(
            &imax_fortele2, &max_fortele2, tele2, mts, megafon, beeline, yota);

    cout << "\t         Из тарифов Теле2 вам больше всего подойдёт: " << endl;

    switch (imax_fortele2) {
    case 0:
        cout << "\tМой онлайн - 350руб/месяц" << endl
             << "- безлимит на Tele2 России" << endl
             << "- 400 минут на другие мобильные номера домашнего региона"
             << endl
             << "- 20 гигабайт" << endl
             << "- Соцсети и мессенджеры безлимитно" << endl
             << "- Скидка 10% на абонентскую плату при покупке и объединении в "
                "группу 4 SIM"
             << endl
             << endl;

        break;
    case 1:
        cout << "\tМой онлайн+ - 450руб/месяц" << endl
             << "- безлимит на Tele2 России" << endl
             << "- 600 минут на остальные номера России" << endl
             << "- 30 гигабайт" << endl
             << "- Соцсети и мессенджеры безлимитно" << endl
             << "- Скидка 10% на абонентскую плату при покупке и объединении в "
                "группу 4 SIM"
             << endl
             << endl;

        break;
    case 2:
        cout << "\tМой разговор - 250руб/месяц" << endl
             << "- безлимит на Tele2 России" << endl
             << "- 200 минут на другие мобильные номера домашнего региона"
             << endl
             << "- 10 гигабайт" << endl
             << "- Скидка 10% на абонентскую плату при покупке и объединении в "
                "группу 4 SIM"
             << endl
             << endl;

        break;
    case 3:
        cout << "\tЛайт - 10руб/день" << endl
             << "- безлимит на Tele2 России" << endl
             << "- 15 гигабайт" << endl
             << endl;

        break;
    case 4:
        cout << "\tБезлимит - 650руб/месяц" << endl
             << "- безлимит на Tele2 России" << endl
             << "- 500 минут на остальные номера России" << endl
             << "- безлимитный интернет" << endl
             << endl;

        break;
    case 5:
        cout << "\tПремиум - 1500руб/месяц" << endl
             << "- безлимит на Tele2 России" << endl
             << "- 2 000 минут" << endl
             << "- Международный роуминг без доплат" << endl
             << "- Безлимитные звонки внутри сети Tele2 России" << endl
             << "- Обслуживание по выделенной линии" << endl
             << endl;

        break;
    }

    // 1
    int imax_mts = 0, max_mts = 0;
    counting_for_mts(&imax_mts, &max_mts, tele2, mts, megafon, beeline, yota);

    cout << "\t         Из тарифов МТС вам больше всего подойдёт: " << endl;

    switch (imax_mts) {
    case 0:
        cout << "\tТарифище - 650 руб./ месяц" << endl
             << "- Опция «БЕЗЛИМИТНЫЙ интернет»" << endl
             << "- Звонки на все сети России" << endl
             << "- Безлимит (с опцией)25 Гб (без опции)" << endl
             << "- 500 Минут" << endl
             << "- 500 SMS" << endl
             << endl;

        break;
    case 1:
        cout << "\tМой smart - 575 руб./ месяц" << endl
             << "- 15 гигабайт" << endl
             << "- 400 Минут" << endl
             << "- 400 SMS" << endl
             << endl;

        break;
    case 2:
        cout << "\tНаш Smart - 1040 руб./ месяц" << endl
             << "- Используйте самостоятельно или делитесь со своей семьей"
             << endl
             << "- Безлимитный интернет" << endl
             << "- 1500 мин на все сети" << endl
             << "- До 5-ти дополнительных номеров" << endl
             << endl;

        break;
    case 3:
        cout << "\tТариф «X» - 520 руб./ месяц" << endl
             << "- Безлимит на YouTube и другие популярные ресурсы " << endl
             << "- + остальной интернет 7 ГБ" << endl
             << "- 100 мин на все сети" << endl
             << endl;

        break;
    case 4:
        cout << "\tSmart  - 420 руб./ месяц" << endl
             << "- Базовый пакет интернета и минут" << endl
             << "- 5 ГБ" << endl
             << "- 200 мин на все сети" << endl
             << "Бeзлимитные звонки на МТС региона" << endl
             << endl;

        break;
    case 5:
        cout << "\tSmart Top - 2025 руб./месяц" << endl
             << "- Для тех, кто не ограничивает себя в общении" << endl
             << "- 3000 мин на все сети" << endl
             << "- Бeзлимитные звонки на МТС России" << endl
             << "- Безлимитный интернет" << endl
             << endl;

        break;
    case 6:
        cout << "\tULTRA  - 2900 руб./месяц" << endl
             << "- Много минут и интернета, Premium сервис" << endl
             << "- 5000 мин на все сети" << endl
             << "- Премиальное обслуживание" << endl
             << "- Безлимитный интернет" << endl
             << endl;

        break;
    }
    // 2
    int imax_megafon = 0, max_megafon = 0;
    counting_for_megafon(
            &imax_megafon, &max_megafon, tele2, mts, megafon, beeline, yota);

    cout << "\t         Из тарифов Мегафон вам больше всего подойдёт: " << endl;

    switch (imax_megafon) {
    case 0:
        cout << "\tМаксимум - 700 руб./ месяц" << endl
             << "- Защита от нежелательных подписок" << endl
             << "- Мессенджеры доступны даже при нуле" << endl
             << "- Пакет SMS включён в тариф" << endl
             << "- Звонки 800 минут" << endl
             << "- Безлимитный интернет" << endl
             << endl;

        break;
    case 1:
        cout << "\tВсё - 500 руб./ месяц" << endl
             << "- Защита от нежелательных подписок" << endl
             << "- Гигабайты сохраняются и накапливаются" << endl
             << "- Мессенджеры доступны даже при нуле" << endl
             << "Звонки 600 минут" << endl
             << "Интернет 25 ГБ" << endl
             << endl;

        break;
    case 2:
        cout << "\tИнтернет - 400 руб./ месяц" << endl
             << "- Защита от нежелательных подписок" << endl
             << "- Гигабайты сохраняются и накапливаются" << endl
             << "- Мессенджеры доступны даже при нуле" << endl
             << "- Звонки 300 минут" << endl
             << "Интернет 10 ГБ" << endl
             << endl;

        break;
    case 3:
        cout << "\tЗвонки - 400 руб./ месяц" << endl
             << "- Защита от нежелательных подписок" << endl
             << "- Гигабайты сохраняются и накапливаются" << endl
             << "- Мессенджеры доступны даже при нуле" << endl
             << "- Звонки на МегаФон не расходуют минуты" << endl
             << "- Звонки 400 минут" << endl
             << "- Интернет 4 ГБ" << endl
             << endl;

        break;
    case 4:
        cout << "\tМинимум  - 310 руб./ месяц" << endl
             << "- Защита от нежелательных подписок" << endl
             << "- Гигабайты сохраняются и накапливаются" << endl
             << "- Мессенджеры доступны даже при нуле" << endl
             << "- Звонки на МегаФон не расходуют минуты" << endl
             << "- Звонки 200 минут" << endl
             << "- Интернет3 ГБ" << endl
             << endl;

        break;
    case 5:
        cout << "\tVIP - 900 руб./месяц" << endl
             << "- Защита от нежелательных подписок" << endl
             << "- Мессенджеры доступны даже при нуле" << endl
             << "- Пакет SMS включён в тариф" << endl
             << "- Звонки 1500 минут" << endl
             << "- Безлимитный интернет" << endl
             << endl;

        break;
    case 6:
        cout << "\tПремиум  - 2000 руб./месяц" << endl
             << "- Защита от нежелательных подписок" << endl
             << "- Мессенджеры доступны даже при нуле" << endl
             << "- Пакет SMS включён в тариф" << endl
             << "- Звонки 3000 минут" << endl
             << "- Безлимитный интернет" << endl
             << endl;

        break;
    }
    // 3
    int imax_beeline = 0, max_beeline = 0;
    counting_for_beeline(
            &imax_beeline, &max_beeline, tele2, mts, megafon, beeline, yota);
    cout << "\t         Из тарифов Beeline вам больше всего подойдёт: " << endl;

    switch (imax_beeline) {
    case 0:
        cout << "\tНе один дома - 600 руб./ месяц" << endl
             << "- 20 гигабайт»" << endl
             << "- 500 минут" << endl
             << "- 300 SMS" << endl
             << "- Облако на 10 ГБ" << endl
             << "- Журналы/Фильмы + сериалы и ТВ" << endl
             << endl;

        break;
    case 1:
        cout << "\tНе один дома 2 - 750 руб./ месяц" << endl
             << "- 30 гигабайт" << endl
             << "- 1000 Минут" << endl
             << "- 300 SMS" << endl
             << "- Облако на 10 ГБ" << endl
             << "- Журналы/Фильмы + сериалы и ТВ" << endl
             << endl;
        ;

        break;
    case 2:
        cout << "\tБлизкие люди 1 - 400 руб./ месяц" << endl
             << "- 15 гигабайт + безлимитные мессенджеры" << endl
             << "- 400 Минут" << endl
             << "- 300 SMS" << endl
             << "- В подарок к тарифу 20 ТВ каналов" << endl
             << "- Раздели 15 ГБ с 1 номером" << endl
             << endl;
        ;

        break;
    case 3:
        cout << "\tБлизкие люди 2 - 500 руб./ месяц" << endl
             << "- 20 гигабайт + безлимитные мессенджеры" << endl
             << "- 700 Минут" << endl
             << "- 300 SMS" << endl
             << "- В подарок к тарифу 20 ТВ каналов" << endl
             << "- Раздели 20 ГБ с 1 номером" << endl
             << endl;
        ;

        break;
    case 4:
        cout << "\tБлизкие люди 3 - 650 руб./ месяц" << endl
             << "- Безлимитный интернет + безлимитная раздача" << endl
             << "- 1200 Минут" << endl
             << "- 300 SMS" << endl
             << "- В подарок к тарифу 75 ТВ каналов" << endl
             << "- Подключи к тарифу ещё один номер" << endl
             << endl;
        ;

        break;
    case 5:
        cout << "\tБлизкие люди 4 - 900 руб./ месяц" << endl
             << "- Безлимитный интернет + безлимитная раздача" << endl
             << "- 1800 Минут" << endl
             << "- 300 SMS" << endl
             << "- В подарок к тарифу 155 ТВ каналов" << endl
             << "- Подключи к тарифу ещё два номера" << endl
             << endl;
        ;

        break;
    case 6:
        cout << "\tБлизкие люди 5 - 1500 руб./ месяц" << endl
             << "- Безлимитный интернет + безлимитная раздача" << endl
             << "- 2500 Минут" << endl
             << "- 300 SMS" << endl
             << "- В подарок к тарифу 155 ТВ каналов" << endl
             << "- Подключи к тарифу ещё три номера" << endl
             << endl;
        ;

        break;
    case 7:
        cout << "\tБлизкие люди 6 - 2500 руб./ месяц" << endl
             << "- Безлимитный интернет + безлимитная раздача" << endl
             << "- 4000 Минут" << endl
             << "- 300 SMS" << endl
             << "- В подарок к тарифу 195 ТВ каналов" << endl
             << "- Подключи к тарифу ещё пять номеров" << endl
             << endl;

        break;
    }
    // 4
    int imax_yota = 0, max_yota = 0;
    counting_for_yota(
            &imax_yota, &max_yota, tele2, mts, megafon, beeline, yota);
    cout << "\t         Из тарифов Yota вам больше всего подойдёт: " << endl;
    switch (max_yota) {
    case 0:
        cout << "\tБольше интернета - 366,79уб/месяц" << endl
             << "- 105 минут" << endl
             << "- 15 ГБ" << endl
             << endl;
        system("PAUSE");
        break;
    case 1:
        cout << "\tБольше минут - 311,96уб/месяц" << endl
             << "- 305 минут" << endl
             << "- 5 ГБ" << endl
             << endl;
        system("PAUSE");
        break;
    case 2:
        cout << "\t ещё больше минут и интернета - 479,80уб/месяц" << endl
             << "- 585 минут" << endl
             << "- Безлимитный интернет" << endl
             << endl;

        break;
    }
    system("PAUSE");
    mainMenu();
}
