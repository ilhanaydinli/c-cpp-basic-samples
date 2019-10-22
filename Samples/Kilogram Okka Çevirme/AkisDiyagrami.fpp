8       	 <--SHAPES
9       	 <--LINES
id1
2       	 <--TYPE
283       	 <--LEFT
59       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
START



id2
2       	 <--TYPE
705       	 <--LEFT
431       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
STOP



id3
91       	 <--TYPE
159       	 <--LEFT
105       	 <--TOP
316       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
Kilogram miktarini giriniz: 
klgrm

id4
92       	 <--TYPE
254       	 <--LEFT
169       	 <--TOP
128       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_GREATER_EQUAL
klgrm
10

id5
92       	 <--TYPE
255       	 <--LEFT
255       	 <--TOP
128       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_LESS_EQUAL
klgrm
50

id6
91       	 <--TYPE
445       	 <--LEFT
215       	 <--TOP
588       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
Girdiginiz kilogram degeri 10 ile 50 kilogram arasinda degildir.


id7
0       	 <--TYPE
188       	 <--LEFT
353       	 <--TOP
260       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MULTIPLY
klgrm
0.78003120124805
snc
id8
91       	 <--TYPE
140       	 <--LEFT
425       	 <--TOP
356       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
Girdiðiniz kilogramýn okka deðeri :
snc

  
---- LINES ---- from,to ----
id1,id3
reserved 1

id3,id4
reserved 1

id4,id5
reserved 1
EVET
id4,id6
reserved 1
HAYIR
id5,id7
reserved 1
EVET
id5,id6
reserved 1
HAYIR
id7,id8
reserved 1

id8,id2
reserved 1

id6,id2
reserved 1

