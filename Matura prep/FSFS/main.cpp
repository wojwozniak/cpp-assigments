#include <iostream>

using namespace std;

int main()
{
    string napis="Na dworze pada³ deszcz. Niebo by³o szare, ca³e w chmurach. Mama krz¹ta³a siê w kuchni, robi¹c obiad. Dziœ mia³a przyrz¹dziæ swoj¹ specjalnoœæ, czyli placki ziemniaczane. Nagle stwierdzi³a jednak, ¿e w domu skoñczy³a siê cebula, któr¹ zawsze do nich dodaje. Oczywiœcie obowi¹zek udania siê do sklepu, spad³ na mnie.Ubra³am siê ciep³o, wziê³am parasol z pó³ki i wysz³am z domu. Ca³y czas la³o jak z cebra. Niemal biegiem dotar³am do pobliskiego warzywniaka. Pani ekspedientka by³a bardzo mi³a. Pomog³a mi wybraæ z koszyka dwie ³adne, du¿e cebule, po³o¿y³a je na wadze i zapakowa³a do przeŸroczystej reklamówki. Podziêkowa³am, zap³aci³am i wysz³am ze sklepu. Deszcz pada³ coraz s³abiej. Schowa³am parasol do kieszeni i na³o¿y³am na g³owê kaptur. Moja kurtka by³a na szczêœcie przeciwdeszczowa. W t¹ stronê sz³am ju¿ wolniej. W pewnym momencie moj¹ uwagê zwróci³ jeden z samochodów. Spod jego maski wydobywa³ siê dziwny pisk. Schyli³am siê i zajrza³am pod spód, ¿eby zobaczyæ co jest jego Ÿród³em. Z pocz¹tku zauwa¿y³am tylko ma³y, czarny k³êbek jakichœ œmieci. Po chwili jednak ów zwitek zacz¹³ siê poruszaæ. Ze zdziwieniem stwierdzi³am, ¿e jest to ma³y kotek! Zawo³a³am do niego: „kici kici”, lecz by³ zbyt przestraszony, ¿eby podejœæ, a mo¿e nawet dziki. Widocznie oddali³ siê od swojej mamy i z³apa³ go deszcz. Wpe³z³am pod samochód i chwyci³am kotka mocno w obie d³onie. Siatkê z cebul¹ zostawi³am na chodniku. Kociak by³ roztrzêsiony i ca³y mokry. Na czarnym futerku wyró¿nia³y siê jedynie bia³e skarpetki i koñcówka ogonka. Pomyœla³am, ¿e wygl¹da bardzo zabawnie, jakby ktoœ zanurzy³ go w farbie. Zabra³am zakupy i kotka, po czym posz³am do domu. Kiedy wesz³am przez drzwi, zobaczy³am, ¿e mama jest w z³ym humorze. Powiedzia³a mi, ¿e dawno powinnam ju¿ by³a wróciæ i chcia³a wiedzieæ, co mnie zatrzyma³o. Nie zauwa¿y³a jeszcze mojego ma³ego towarzysza. Uœmiechnê³am siê i wyci¹gnê³am w jej stronê rêce, w których kry³ siê zwierzak. Mama z pocz¹tku nie wiedzia³a, na co w³aœciwie patrzy, ale ju¿ po chwili wykrzyknê³a: „Ojej!” i zaczê³a rozczulaæ siê nad kociakiem. Wspólnymi si³ami doprowadzi³yœmy go do normalnego stanu. Teraz jego futerko by³o suche, nie trz¹s³ siê i wykazywa³ ogromny apetyt, poch³aniaj¹c twaro¿ek, którym poczêstowa³a go moja mama. W ca³ym tym zamieszaniu z ma³ym zwierz¹tkiem, zapomnia³yœmy ca³kiem o plackach ziemniaczanych. Kiedy wróci³ tata, nie by³ on z tego powodu zadowolony. Stwierdzi³ tylko krótko, ¿e kociak jest ³adny, ale nie mo¿emy go zatrzymaæ. Od razu stanê³am w jego obronie. Przecie¿ to nieuczciwe, bo gdyby nie ja, kotek móg³by ju¿ nie ¿yæ! Jest za ma³y, ¿eby mieszkaæ na podwórku! Mama popar³a moj¹ argumentacjê i w koñcu tata uleg³. ";
    string szukaj="kot";

    size_t pozycja=napis.find(szukaj);

    if(pozycja!=string::npos)
        cout <<"Znaleziono na pozycji: "<<pozycja;
        else cout<<"Nie znaleziono!";




    return 0;
}
