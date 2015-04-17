網際網路檔案館（Internet Archive）是個非營利性的數位圖書館，根據維基百科記載，該館由Alexa創始人布魯斯特•卡利於1996年創辦，提供各式如網站、音樂、影片、和數百萬書籍等數位資料，並可永久性免費儲存及獲取。迄至2012年10月，其資訊儲存量已經高達10PB（10240TB）。

目前網際網路檔案館提供了共901款1970年代至1990年代的大型電玩遊戲，這些老古董大概可以算是遊戲界中「青銅器時代」的產物。不過可別看不起這些遊戲，在當時家用電腦與遊戲主機的性能相對貧弱很多，所以業務用的大型電玩有本錢採用更高階硬體設備，提供更細膩的畫面與更刺激的聲光效果，而且當時也沒有網路，所以玩家聚在大型電玩機台前，一起切磋遊戲心得便是主要的交流方式。
------------------
網際網路檔案館的大型電玩遊戲，是透過JSMESS模擬器來執行，程式會自動從網站讀取遊戲以及所需檔案，並在瀏覽器中執行。MESS本身為M.A.M.E.模擬器的衍生版本，而JSMESS則是採用至Javascript語言編譯的MESS。

JSMESS支援鍵盤或是搖桿、手把操作，不過在使用搖桿、手把時，需於載入遊戲網頁後先按下任意按鍵，待程式辨識之後，重新載入網頁即可使用。在筆者測試的過程中，使用Firefox、Chrome等瀏覽器皆可正常遊玩，只是部分遊戲的速度比較慢，或是聲音有些許問題。


JSMESS
======
JSMESS is an attempt to port [MESS](http://mess.org/) /
[MAME](http://mamedev.org/) to JavaScript using
[Emscripten](https://github.com/kripken/emscripten).

Why?
----
[Jason Scott](http://jsmess.textfiles.com/) says it best:
> The MESS program can emulate (or begin to emulate) a majority of home
> computers, and continues to be improved frequently. By porting this program
> into the standardized and cross-platform Javascript language, it will be
> possible to turn computer history and experience into the same embeddable
> object as movies, documents, and audio enjoy.

Status of JSMESS
----------------
Jason Scott's [JSMESS](http://jsmess.textfiles.com) site has demos for most working systems now.
JSMESS is now tracking the latest versions of MESS, and sound and joystick support work in many
cases.

Building 0.153+
---------------
To build JSMESS 0.153+, start with [How to build and test JSMESS 0.153](https://github.com/jsmess/jsmess/wiki/How-to-build-and-test-JSMESS-0.153).

Relevant Links
--------------
* [The blog post that started it all](http://ascii.textfiles.com/archives/3375)
* [Archive Team wiki page](http://www.archiveteam.org/index.php?title=Javascript_Mess)
* [Full docs on the GitHub wiki](https://github.com/jsmess/jsmess/wiki)
