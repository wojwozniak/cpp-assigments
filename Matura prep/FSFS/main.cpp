#include <iostream>

using namespace std;

int main()
{
    string napis="Na dworze pada� deszcz. Niebo by�o szare, ca�e w chmurach. Mama krz�ta�a si� w kuchni, robi�c obiad. Dzi� mia�a przyrz�dzi� swoj� specjalno��, czyli placki ziemniaczane. Nagle stwierdzi�a jednak, �e w domu sko�czy�a si� cebula, kt�r� zawsze do nich dodaje. Oczywi�cie obowi�zek udania si� do sklepu, spad� na mnie.Ubra�am si� ciep�o, wzi�am parasol z p�ki i wysz�am z domu. Ca�y czas la�o jak z cebra. Niemal biegiem dotar�am do pobliskiego warzywniaka. Pani ekspedientka by�a bardzo mi�a. Pomog�a mi wybra� z koszyka dwie �adne, du�e cebule, po�o�y�a je na wadze i zapakowa�a do prze�roczystej reklam�wki. Podzi�kowa�am, zap�aci�am i wysz�am ze sklepu. Deszcz pada� coraz s�abiej. Schowa�am parasol do kieszeni i na�o�y�am na g�ow� kaptur. Moja kurtka by�a na szcz�cie przeciwdeszczowa. W t� stron� sz�am ju� wolniej. W pewnym momencie moj� uwag� zwr�ci� jeden z samochod�w. Spod jego maski wydobywa� si� dziwny pisk. Schyli�am si� i zajrza�am pod sp�d, �eby zobaczy� co jest jego �r�d�em. Z pocz�tku zauwa�y�am tylko ma�y, czarny k��bek jakich� �mieci. Po chwili jednak �w zwitek zacz�� si� porusza�. Ze zdziwieniem stwierdzi�am, �e jest to ma�y kotek! Zawo�a�am do niego: �kici kici�, lecz by� zbyt przestraszony, �eby podej��, a mo�e nawet dziki. Widocznie oddali� si� od swojej mamy i z�apa� go deszcz. Wpe�z�am pod samoch�d i chwyci�am kotka mocno w obie d�onie. Siatk� z cebul� zostawi�am na chodniku. Kociak by� roztrz�siony i ca�y mokry. Na czarnym futerku wyr�nia�y si� jedynie bia�e skarpetki i ko�c�wka ogonka. Pomy�la�am, �e wygl�da bardzo zabawnie, jakby kto� zanurzy� go w farbie. Zabra�am zakupy i kotka, po czym posz�am do domu. Kiedy wesz�am przez drzwi, zobaczy�am, �e mama jest w z�ym humorze. Powiedzia�a mi, �e dawno powinnam ju� by�a wr�ci� i chcia�a wiedzie�, co mnie zatrzyma�o. Nie zauwa�y�a jeszcze mojego ma�ego towarzysza. U�miechn�am si� i wyci�gn�am w jej stron� r�ce, w kt�rych kry� si� zwierzak. Mama z pocz�tku nie wiedzia�a, na co w�a�ciwie patrzy, ale ju� po chwili wykrzykn�a: �Ojej!� i zacz�a rozczula� si� nad kociakiem. Wsp�lnymi si�ami doprowadzi�y�my go do normalnego stanu. Teraz jego futerko by�o suche, nie trz�s� si� i wykazywa� ogromny apetyt, poch�aniaj�c twaro�ek, kt�rym pocz�stowa�a go moja mama. W ca�ym tym zamieszaniu z ma�ym zwierz�tkiem, zapomnia�y�my ca�kiem o plackach ziemniaczanych. Kiedy wr�ci� tata, nie by� on z tego powodu zadowolony. Stwierdzi� tylko kr�tko, �e kociak jest �adny, ale nie mo�emy go zatrzyma�. Od razu stan�am w jego obronie. Przecie� to nieuczciwe, bo gdyby nie ja, kotek m�g�by ju� nie �y�! Jest za ma�y, �eby mieszka� na podw�rku! Mama popar�a moj� argumentacj� i w ko�cu tata uleg�. ";
    string szukaj="kot";

    size_t pozycja=napis.find(szukaj);

    if(pozycja!=string::npos)
        cout <<"Znaleziono na pozycji: "<<pozycja;
        else cout<<"Nie znaleziono!";




    return 0;
}
