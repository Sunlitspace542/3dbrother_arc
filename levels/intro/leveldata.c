#include <PR/ultratypes.h>
#include <PR/mbi.h>

#include "macros.h"
#include "types.h"

#include "make_const_nonconst.h"

#define	INT		0
#define	FLOAT		1
#define	POINTER	2

#define	NIN_BBOX	0
#define	NIN_BSPHERE	1
#define	NIN_BCYL	2
#define	NIN_BHULL	3
#define	NIN_BHIST	4

#define	NIN_HIST_MIN	0
#define	NIN_HIST_MAX	1

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-braces"

Vtx nintendo_logo_v[] = {
	{ 439, 64, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v0 p1610/V1 used 17 times */ 
	{ 439, 67, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v1 p1560/V2 used 5 times */ 
	{ 439, 67, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v2 p905/V2 used 4 times */ 
	{ 439, 64, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v3 p917/V2 used 15 times */ 
	{ 439, 60, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v4 p904/V2 used 5 times */ 
	{ 439, 60, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v5 p1561/V2 used 4 times */ 
	{ 445, 73, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v6 p1583/V2 used 12 times */ 
	{ 443, 67, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v7 p1599/V2 used 5 times */ 
	{ 444, 70, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v8 p1591/V2 used 6 times */ 
	{ 443, 61, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v9 p1610/V3 used 5 times */ 
	{ 443, 64, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v10 p1607/V2 used 5 times */ 
	{ 451, 46, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v11 p1608/V2 used 17 times */ 
	{ 445, 55, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v12 p1609/V2 used 5 times */ 
	{ 444, 58, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v13 p1610/V2 used 5 times */ 
	{ 440, 57, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v14 p1562/V2 used 4 times */ 
	{ 442, 53, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v15 p1563/V2 used 5 times */ 
	{ 445, 50, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v16 p1564/V2 used 5 times */ 
	{ 448, 47, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v17 p1565/V2 used 5 times */ 
	{ 444, 58, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v18 p915/V2 used 5 times */ 
	{ 445, 55, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v19 p918/V2 used 7 times */ 
	{ 443, 61, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v20 p914/V2 used 5 times */ 
	{ 447, 53, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v21 p1606/V2 used 6 times */ 
	{ 455, 44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v22 p1566/V2 used 5 times */ 
	{ 448, 47, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v23 p900/V2 used 4 times */ 
	{ 450, 51, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v24 p1605/V2 used 5 times */ 
	{ 473, 50, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v25 p1600/V2 used 16 times */ 
	{ 462, 48, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v26 p1601/V2 used 6 times */ 
	{ 459, 48, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v27 p1602/V2 used 5 times */ 
	{ 456, 48, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v28 p1603/V2 used 5 times */ 
	{ 453, 49, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v29 p1604/V2 used 5 times */ 
	{ 463, 44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v30 p1568/V2 used 5 times */ 
	{ 466, 46, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v31 p1569/V2 used 5 times */ 
	{ 470, 47, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v32 p1570/V2 used 5 times */ 
	{ 459, 44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v33 p1567/V2 used 5 times */ 
	{ 443, 64, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v34 p913/V2 used 5 times */ 
	{ 473, 50, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v35 p933/V2 used 18 times */ 
	{ 443, 67, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v36 p912/V2 used 5 times */ 
	{ 468, 51, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v37 p928/V2 used 5 times */ 
	{ 468, 51, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v38 p1597/V2 used 5 times */ 
	{ 472, 55, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v39 p1595/V2 used 6 times */ 
	{ 474, 58, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v40 p1594/V2 used 5 times */ 
	{ 475, 64, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v41 p935/V2 used 5 times */ 
	{ 478, 72, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v42 p1592/V2 used 17 times */ 
	{ 476, 75, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v43 p1576/V2 used 4 times */ 
	{ 479, 68, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v44 p890/V2 used 5 times */ 
	{ 444, 70, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v45 p911/V2 used 5 times */ 
	{ 445, 73, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v46 p881/V2 used 5 times */ 
	{ 475, 64, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v47 p1590/V2 used 5 times */ 
	{ 475, 67, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v48 p1589/V2 used 5 times */ 
	{ 472, 73, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v49 p938/V2 used 5 times */ 
	{ 472, 73, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v50 p1587/V2 used 5 times */ 
	{ 470, 75, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v51 p1586/V2 used 5 times */ 
	{ 468, 78, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v52 p1585/V2 used 6 times */ 
	{ 459, 84, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v53 p1584/V2 used 6 times */ 
	{ 459, 84, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v54 p943/V1 used 17 times */ 
	{ 448, 76, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v55 p882/V2 used 6 times */ 
	{ 454, 83, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v56 p1581/V2 used 12 times */ 
	{ 449, 82, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v57 p1555/V2 used 5 times */ 
	{ 445, 79, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v58 p1556/V2 used 5 times */ 
	{ 442, 74, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v59 p1557/V2 used 5 times */ 
	{ 441, 72, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v60 p1558/V2 used 5 times */ 
	{ 440, 69, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v61 p1559/V2 used 5 times */ 
	{ 465, 79, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v62 p1582/V2 used 6 times */ 
	{ 454, 83, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v63 p884/V2 used 5 times */ 
	{ 463, 84, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v64 p1580/V2 used 6 times */ 
	{ 467, 83, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v65 p1579/V2 used 5 times */ 
	{ 473, 78, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v66 p888/V2 used 5 times */ 
	{ 476, 75, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v67 p889/V2 used 5 times */ 
	{ 479, 64, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v68 p1574/V2 used 6 times */ 
	{ 477, 56, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v69 p893/V2 used 5 times */ 
	{ 476, 53, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v70 p894/V2 used 5 times */ 
	{ 470, 47, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v71 p895/V2 used 4 times */ 
	{ 445, 50, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v72 p901/V2 used 5 times */ 
	{ 442, 53, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v73 p902/V2 used 5 times */ 
	{ 440, 57, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v74 p903/V2 used 6 times */ 
	{ 440, 69, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v75 p906/V2 used 5 times */ 
	{ 441, 72, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v76 p907/V2 used 5 times */ 
	{ 462, 80, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v77 p1553/V2 used 5 times */ 
	{ 459, 80, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v78 p1552/V2 used 5 times */ 
	{ 456, 80, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v79 p1551/V2 used 5 times */ 
	{ 453, 79, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v80 p1550/V2 used 5 times */ 
	{ 450, 78, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v81 p1549/V2 used 5 times */ 
	{ 374, -45, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v82 p1514/V2 used 5 times */ 
	{ 343, -19, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v83 p957/V2 used 4 times */ 
	{ 356, -35, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v84 p1546/V1 used 17 times */ 
	{ 380, 21, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v85 p1546/V3 used 4 times */ 
	{ 382, 29, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v86 p1528/V2 used 11 times */ 
	{ 381, 25, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v87 p1537/V2 used 5 times */ 
	{ 380, 7, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v88 p946/V2 used 4 times */ 
	{ 380, 21, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v89 p980/V2 used 6 times */ 
	{ 380, -17, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v90 p1545/V2 used 6 times */ 
	{ 380, -17, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v91 p948/V2 used 7 times */ 
	{ 381, -26, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v92 p963/V2 used 5 times */ 
	{ 382, -30, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v93 p964/V2 used 5 times */ 
	{ 385, -33, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v94 p965/V2 used 5 times */ 
	{ 388, -36, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v95 p966/V2 used 5 times */ 
	{ 392, -37, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v96 p967/V2 used 5 times */ 
	{ 396, -38, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v97 p970/V2 used 6 times */ 
	{ 418, -45, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v98 p1538/V2 used 19 times */ 
	{ 436, -35, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v99 p954/V2 used 6 times */ 
	{ 396, -49, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v100 p955/V2 used 5 times */ 
	{ 381, 25, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v101 p988/V2 used 5 times */ 
	{ 399, -37, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v102 p971/V2 used 5 times */ 
	{ 403, -36, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v103 p972/V2 used 5 times */ 
	{ 407, -33, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v104 p973/V2 used 5 times */ 
	{ 409, -30, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v105 p974/V2 used 5 times */ 
	{ 411, -26, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v106 p975/V2 used 5 times */ 
	{ 411, -22, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v107 p976/V2 used 6 times */ 
	{ 412, -17, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v108 p1527/V2 used 6 times */ 
	{ 418, 44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v109 p1529/V2 used 13 times */ 
	{ 436, 33, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v110 p989/V2 used 16 times */ 
	{ 382, 29, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v111 p993/V3 used 5 times */ 
	{ 396, 48, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v112 p1521/V2 used 13 times */ 
	{ 412, -12, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v113 p978/V2 used 6 times */ 
	{ 412, -3, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v114 p263/V2 used 3 times */ 
	{ 412, 16, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v115 p1525/V2 used 6 times */ 
	{ 412, 16, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v116 p979/V2 used 6 times */ 
	{ 411, 25, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v117 p983/V2 used 5 times */ 
	{ 409, 29, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v118 p984/V2 used 5 times */ 
	{ 407, 32, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v119 p985/V2 used 5 times */ 
	{ 449, 18, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v120 p951/V2 used 4 times */ 
	{ 449, 18, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v121 p1519/V2 used 5 times */ 
	{ 449, -19, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v122 p953/V2 used 5 times */ 
	{ 339, 0, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v123 p958/V2 used 5 times */ 
	{ 343, 18, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v124 p959/V2 used 5 times */ 
	{ 356, 33, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v125 p960/V2 used 6 times */ 
	{ 380, -3, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v126 p947/V2 used 5 times */ 
	{ 412, 2, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v127 p945/V2 used 5 times */ 
	{ 403, 35, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v128 p986/V2 used 5 times */ 
	{ 399, 36, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v129 p987/V2 used 5 times */ 
	{ 396, 37, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v130 p990/V2 used 6 times */ 
	{ 392, 36, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v131 p991/V2 used 5 times */ 
	{ 388, 35, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v132 p992/V2 used 5 times */ 
	{ 385, 32, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v133 p993/V2 used 5 times */ 
	{ -290, 19, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v134 p1141/V2 used 6 times */ 
	{ -290, -44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v135 p1494/V2 used 4 times */ 
	{ -250, -44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v136 p1496/V3 used 7 times */ 
	{ -290, 19, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v137 p1496/V1 used 6 times */ 
	{ -290, -44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v138 p1495/V2 used 5 times */ 
	{ -250, 42, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v139 p1492/V2 used 4 times */ 
	{ -290, 85, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v140 p1491/V1 used 5 times */ 
	{ -250, 85, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v141 p1491/V3 used 4 times */ 
	{ -290, 59, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v142 p1490/V2 used 4 times */ 
	{ -250, 85, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v143 p1167/V2 used 5 times */ 
	{ -352, 12, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v144 p68/V2 used 4 times */ 
	{ -352, -5, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v145 p1489/V1 used 8 times */ 
	{ -312, -44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v146 p1489/V3 used 6 times */ 
	{ -312, 85, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v147 p1486/V2 used 7 times */ 
	{ -409, -44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v148 p1479/V2 used 6 times */ 
	{ -392, 19, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v149 p1480/V2 used 4 times */ 
	{ -409, 46, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v150 p1489/V2 used 11 times */ 
	{ -449, 85, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v151 p1488/V2 used 10 times */ 
	{ -312, 85, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v152 p1142/V2 used 4 times */ 
	{ -334, -44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v153 p1485/V2 used 6 times */ 
	{ -426, 85, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v154 p1474/V2 used 6 times */ 
	{ -449, 61, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v155 p1475/V2 used 4 times */ 
	{ -369, 21, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v156 p1487/V2 used 8 times */ 
	{ -387, 51, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v157 p1470/V2 used 4 times */ 
	{ -352, 85, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v158 p1162/V2 used 7 times */ 
	{ -352, -44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v159 p1145/V2 used 5 times */ 
	{ -359, -34, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v160 p1482/V2 used 6 times */ 
	{ -374, -10, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v161 p1481/V2 used 5 times */ 
	{ -439, -44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v162 p1478/V2 used 5 times */ 
	{ -449, -44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v163 p1151/V2 used 6 times */ 
	{ -449, 24, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v164 p1476/V2 used 6 times */ 
	{ -408, 85, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v165 p1472/V2 used 5 times */ 
	{ -408, 85, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v166 p1157/V2 used 5 times */ 
	{ -402, 75, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v167 p1471/V2 used 6 times */ 
	{ -352, 34, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v168 p1469/V2 used 5 times */ 
	{ -352, 58, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v169 p1165/V3 used 6 times */ 
	{ -131, 37, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v170 p1439/V2 used 6 times */ 
	{ -146, 44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v171 p1466/V1 used 15 times */ 
	{ -153, -12, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v172 p1454/V2 used 11 times */ 
	{ -154, 5, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v173 p1461/V2 used 5 times */ 
	{ -154, 13, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v174 p1466/V3 used 5 times */ 
	{ -155, 16, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v175 p1466/V2 used 5 times */ 
	{ -156, 19, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v176 p1465/V2 used 5 times */ 
	{ -160, 23, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v177 p1464/V2 used 5 times */ 
	{ -165, 27, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v178 p1463/V2 used 6 times */ 
	{ -190, 33, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v179 p1462/V2 used 12 times */ 
	{ -190, 35, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v180 p1110/V2 used 5 times */ 
	{ -172, 28, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v181 p1460/V2 used 5 times */ 
	{ -178, 27, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v182 p1459/V2 used 5 times */ 
	{ -183, 24, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v183 p1458/V2 used 5 times */ 
	{ -186, 21, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v184 p1457/V2 used 6 times */ 
	{ -229, -44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v185 p1456/V2 used 11 times */ 
	{ -229, -44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v186 p1105/V2 used 5 times */ 
	{ -190, 35, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v187 p1455/V2 used 9 times */ 
	{ -153, -44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v188 p1433/V2 used 4 times */ 
	{ -189, 18, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v189 p1453/V2 used 5 times */ 
	{ -190, 14, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v190 p1452/V2 used 5 times */ 
	{ -190, 6, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v191 p1451/V2 used 5 times */ 
	{ -190, -11, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v192 p1129/V2 used 10 times */ 
	{ -229, 24, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v193 p1107/V2 used 4 times */ 
	{ -229, 42, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v194 p1446/V2 used 6 times */ 
	{ -190, 42, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v195 p1109/V2 used 5 times */ 
	{ -184, 38, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v196 p1111/V2 used 5 times */ 
	{ -168, 44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v197 p1441/V2 used 6 times */ 
	{ -115, 2, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v198 p1117/V2 used 4 times */ 
	{ -115, -19, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v199 p1118/V2 used 5 times */ 
	{ -115, -34, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v200 p1119/V2 used 5 times */ 
	{ -115, -44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v201 p1120/V2 used 5 times */ 
	{ -115, -44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v202 p1434/V2 used 5 times */ 
	{ -93, 54, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v203 p1432/V1 used 13 times */ 
	{ -93, 68, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v204 p1423/V2 used 5 times */ 
	{ -54, 54, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v205 p1432/V3 used 7 times */ 
	{ -54, 41, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v206 p1182/V1 used 8 times */ 
	{ -33, 41, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v207 p1178/V2 used 6 times */ 
	{ -54, 41, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v208 p1432/V2 used 7 times */ 
	{ -54, 54, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v209 p1182/V3 used 8 times */ 
	{ -54, 72, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v210 p1421/V2 used 5 times */ 
	{ -54, -44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v211 p1168/V2 used 5 times */ 
	{ -93, -44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v212 p1429/V2 used 6 times */ 
	{ -93, -9, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v213 p1170/V2 used 5 times */ 
	{ -114, 41, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v214 p1171/V2 used 5 times */ 
	{ -114, 51, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v215 p1426/V2 used 4 times */ 
	{ -114, 51, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v216 p1425/V2 used 4 times */ 
	{ -93, 72, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v217 p1422/V2 used 5 times */ 
	{ -93, 72, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v218 p1175/V2 used 4 times */ 
	{ -33, 54, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v219 p1420/V2 used 6 times */ 
	{ 67, -28, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v220 p1417/V2 used 13 times */ 
	{ 38, -47, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v221 p1416/V2 used 8 times */ 
	{ 19, -38, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v222 p1418/V3 used 6 times */ 
	{ 54, -39, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v223 p1418/V1 used 5 times */ 
	{ 27, -36, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v224 p1079/V2 used 5 times */ 
	{ 23, -38, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v225 p1083/V2 used 6 times */ 
	{ 19, -38, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v226 p1085/V2 used 5 times */ 
	{ 74, -14, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v227 p1073/V2 used 11 times */ 
	{ -3, -45, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v228 p1399/V2 used 14 times */ 
	{ 15, -38, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v229 p1087/V2 used 5 times */ 
	{ 30, -34, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v230 p1077/V2 used 5 times */ 
	{ 33, -30, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v231 p1075/V2 used 6 times */ 
	{ 34, -27, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v232 p1072/V2 used 5 times */ 
	{ 35, -23, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v233 p1070/V2 used 5 times */ 
	{ 36, -19, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v234 p1068/V2 used 5 times */ 
	{ 36, -14, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v235 p1066/V2 used 5 times */ 
	{ 3, 11, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v236 p1103/V2 used 8 times */ 
	{ 36, 17, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v237 p1100/V2 used 5 times */ 
	{ 72, 17, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v238 p1406/V3 used 11 times */ 
	{ 36, 11, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v239 p1406/V1 used 7 times */ 
	{ 3, -4, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v240 p1065/V2 used 4 times */ 
	{ 3, -1, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v241 p1406/V2 used 10 times */ 
	{ 3, 11, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v242 p1405/V2 used 7 times */ 
	{ 72, 17, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v243 p1063/V2 used 5 times */ 
	{ 77, -1, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v244 p1384/V2 used 6 times */ 
	{ -33, -20, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v245 p1391/V2 used 12 times */ 
	{ 35, 21, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v246 p1097/V2 used 5 times */ 
	{ 34, 25, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v247 p1095/V2 used 5 times */ 
	{ 33, 28, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v248 p1093/V2 used 5 times */ 
	{ 30, 32, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v249 p1091/V2 used 6 times */ 
	{ 19, 47, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v250 p1400/V2 used 17 times */ 
	{ 41, 43, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v251 p1386/V2 used 5 times */ 
	{ -3, 43, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v252 p1082/V2 used 14 times */ 
	{ -21, -35, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v253 p1372/V2 used 5 times */ 
	{ 19, -49, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v254 p1373/V2 used 4 times */ 
	{ 27, 34, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v255 p1088/V2 used 5 times */ 
	{ 23, 36, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v256 p1086/V2 used 5 times */ 
	{ 19, 36, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v257 p1084/V2 used 6 times */ 
	{ 15, 36, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v258 p1081/V2 used 5 times */ 
	{ 12, 34, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v259 p1078/V2 used 5 times */ 
	{ 8, 32, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v260 p1076/V2 used 5 times */ 
	{ 5, 28, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v261 p1074/V2 used 5 times */ 
	{ -21, -35, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v262 p1056/V2 used 5 times */ 
	{ -33, 17, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v263 p1059/V2 used 6 times */ 
	{ -21, 33, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v264 p1060/V2 used 5 times */ 
	{ 60, 33, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v265 p1385/V2 used 5 times */ 
	{ 77, -1, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v266 p1101/V2 used 12 times */ 
	{ 3, -18, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v267 p1102/V2 used 7 times */ 
	{ 4, -27, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v268 p1096/V2 used 5 times */ 
	{ 4, -27, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v269 p1380/V2 used 5 times */ 
	{ 8, -34, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v270 p1092/V2 used 5 times */ 
	{ 12, -36, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v271 p1090/V2 used 5 times */ 
	{ 4, 25, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v272 p1071/V2 used 5 times */ 
	{ 3, 21, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v273 p1069/V2 used 6 times */ 
	{ 3, 17, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v274 p1367/V2 used 6 times */ 
	{ 186, 37, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v275 p1340/V2 used 5 times */ 
	{ 172, 44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v276 p1365/V1 used 15 times */ 
	{ 164, -12, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v277 p1353/V2 used 11 times */ 
	{ 164, 5, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v278 p1360/V2 used 4 times */ 
	{ 164, 13, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v279 p1365/V3 used 6 times */ 
	{ 163, 16, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v280 p1365/V2 used 5 times */ 
	{ 164, 5, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v281 p1200/V2 used 6 times */ 
	{ 161, 19, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v282 p1364/V2 used 5 times */ 
	{ 158, 23, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v283 p1363/V2 used 5 times */ 
	{ 153, 27, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v284 p1362/V2 used 6 times */ 
	{ 128, 33, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v285 p1361/V2 used 11 times */ 
	{ 128, 33, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v286 p1214/V1 used 18 times */ 
	{ 146, 28, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v287 p1359/V2 used 5 times */ 
	{ 139, 27, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v288 p1358/V2 used 5 times */ 
	{ 134, 24, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v289 p1357/V2 used 5 times */ 
	{ 131, 21, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v290 p1356/V2 used 6 times */ 
	{ 89, -44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v291 p1355/V2 used 10 times */ 
	{ 127, -44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v292 p1348/V2 used 4 times */ 
	{ 89, -44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v293 p1184/V2 used 6 times */ 
	{ 128, 35, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v294 p1354/V2 used 6 times */ 
	{ 128, 42, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v295 p1345/V2 used 5 times */ 
	{ 164, -12, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v296 p1199/V2 used 5 times */ 
	{ 129, 18, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v297 p1352/V2 used 5 times */ 
	{ 128, 14, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v298 p1351/V2 used 5 times */ 
	{ 127, -11, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v299 p1349/V2 used 6 times */ 
	{ 89, 42, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v300 p1347/V2 used 6 times */ 
	{ 109, 42, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v301 p1207/V2 used 9 times */ 
	{ 141, 42, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v302 p1189/V2 used 5 times */ 
	{ 149, 44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v303 p1190/V2 used 5 times */ 
	{ 149, 44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v304 p1342/V2 used 5 times */ 
	{ 186, 37, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v305 p1193/V2 used 5 times */ 
	{ 203, 2, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v306 p1338/V2 used 5 times */ 
	{ 203, -19, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v307 p1337/V2 used 5 times */ 
	{ 203, -19, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v308 p1195/V2 used 5 times */ 
	{ 203, -34, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v309 p1196/V2 used 5 times */ 
	{ 203, -44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v310 p1197/V2 used 5 times */ 
	{ 287, 37, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v311 p1333/V1 used 18 times */ 
	{ 287, 74, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v312 p1292/V2 used 6 times */ 
	{ 287, 21, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v313 p1327/V2 used 5 times */ 
	{ 287, 18, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v314 p1316/V2 used 6 times */ 
	{ 285, 24, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v315 p1333/V3 used 5 times */ 
	{ 288, 14, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v316 p1311/V2 used 9 times */ 
	{ 279, 29, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v317 p1025/V2 used 5 times */ 
	{ 279, 29, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v318 p1332/V2 used 5 times */ 
	{ 276, 31, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v319 p1331/V2 used 5 times */ 
	{ 272, 31, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v320 p1330/V2 used 5 times */ 
	{ 269, 31, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v321 p1329/V2 used 6 times */ 
	{ 222, 21, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v322 p1328/V2 used 23 times */ 
	{ 239, 39, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v323 p1016/V2 used 5 times */ 
	{ 215, -2, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v324 p1014/V2 used 5 times */ 
	{ 287, 21, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v325 p997/V2 used 5 times */ 
	{ 265, 29, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v326 p1326/V2 used 5 times */ 
	{ 262, 27, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v327 p1325/V2 used 5 times */ 
	{ 259, 24, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v328 p1324/V2 used 5 times */ 
	{ 258, 21, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v329 p1323/V2 used 5 times */ 
	{ 257, 18, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v330 p1322/V2 used 5 times */ 
	{ 257, 1, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v331 p1286/V2 used 6 times */ 
	{ 257, -15, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v332 p1320/V2 used 6 times */ 
	{ 257, -8, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v333 p1285/V2 used 4 times */ 
	{ 257, -15, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v334 p1039/V2 used 7 times */ 
	{ 257, -19, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v335 p1319/V2 used 6 times */ 
	{ 258, -23, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v336 p1318/V2 used 6 times */ 
	{ 264, -46, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v337 p1317/V2 used 10 times */ 
	{ 264, -46, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v338 p1008/V2 used 5 times */ 
	{ 253, -46, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v339 p1009/V2 used 5 times */ 
	{ 288, 14, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v340 p995/V2 used 6 times */ 
	{ 259, -26, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v341 p1315/V2 used 5 times */ 
	{ 262, -29, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v342 p1314/V2 used 5 times */ 
	{ 265, -31, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v343 p1313/V2 used 6 times */ 
	{ 287, -39, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v344 p1312/V2 used 9 times */ 
	{ 287, -44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v345 p1306/V2 used 4 times */ 
	{ 287, -39, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v346 p1050/V1 used 20 times */ 
	{ 288, 1, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v347 p719/V1 used 3 times */ 
	{ 269, -32, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v348 p1310/V2 used 6 times */ 
	{ 326, -44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v349 p1309/V2 used 16 times */ 
	{ 326, 85, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v350 p1023/V2 used 14 times */ 
	{ 307, -44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v351 p1308/V2 used 5 times */ 
	{ 287, -44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v352 p1006/V2 used 5 times */ 
	{ 253, -46, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v353 p1304/V2 used 5 times */ 
	{ 242, -42, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v354 p1303/V2 used 5 times */ 
	{ 232, -36, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v355 p1012/V2 used 5 times */ 
	{ 232, -36, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v356 p1301/V2 used 5 times */ 
	{ 228, -32, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v357 p1300/V2 used 5 times */ 
	{ 265, 45, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v358 p1017/V2 used 5 times */ 
	{ 265, 45, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v359 p1296/V2 used 5 times */ 
	{ 272, 44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v360 p1034/V2 used 11 times */ 
	{ 277, 42, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v361 p1294/V2 used 6 times */ 
	{ 287, 85, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v362 p1291/V2 used 5 times */ 
	{ 288, -15, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v363 p1288/V2 used 6 times */ 
	{ 287, -19, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v364 p1278/V2 used 5 times */ 
	{ 288, -3, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v365 p1287/V2 used 4 times */ 
	{ 272, -33, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v366 p1284/V2 used 5 times */ 
	{ 276, -32, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v367 p1283/V2 used 5 times */ 
	{ 279, -31, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v368 p1282/V2 used 5 times */ 
	{ 283, -29, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v369 p1281/V2 used 5 times */ 
	{ 285, -26, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v370 p1280/V2 used 5 times */ 
	{ 287, -23, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v371 p1279/V2 used 5 times */ 
	{ 517, 117, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v372 p858/V2 used 5 times */ 
	{ 547, -32, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v373 p1270/V2 used 10 times */ 
	{ 517, 117, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v374 p1276/V1 used 8 times */ 
	{ 523, 20, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v375 p1274/V2 used 6 times */ 
	{ 515, 61, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v376 p1276/V3 used 5 times */ 
	{ 515, 61, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v377 p863/V2 used 5 times */ 
	{ 493, 94, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v378 p1276/V2 used 7 times */ 
	{ 411, 158, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v379 p1275/V2 used 9 times */ 
	{ 523, 20, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v380 p862/V2 used 6 times */ 
	{ -414, 158, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v381 p1248/V2 used 4 times */ 
	{ 515, -19, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v382 p847/V2 used 5 times */ 
	{ 458, 116, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v383 p1273/V2 used 5 times */ 
	{ -473, 147, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v384 p1271/V2 used 11 times */ 
	{ 411, 124, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v385 p868/V2 used 6 times */ 
	{ -520, 117, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v386 p1249/V2 used 5 times */ 
	{ 547, -32, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v387 p860/V2 used 4 times */ 
	{ 557, 20, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v388 p865/V2 used 9 times */ 
	{ 458, -75, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v389 p1259/V2 used 6 times */ 
	{ 493, -52, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v390 p1264/V2 used 5 times */ 
	{ 515, -19, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v391 p1269/V2 used 5 times */ 
	{ 493, -52, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v392 p846/V2 used 5 times */ 
	{ -413, 124, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v393 p1268/V2 used 6 times */ 
	{ -460, 116, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v394 p1267/V2 used 5 times */ 
	{ -495, 94, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v395 p873/V2 used 6 times */ 
	{ -560, 20, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v396 p1265/V2 used 11 times */ 
	{ -549, -32, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v397 p853/V2 used 5 times */ 
	{ -549, 73, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v398 p1250/V2 used 5 times */ 
	{ 458, -75, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v399 p845/V2 used 6 times */ 
	{ -518, 61, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v400 p1263/V2 used 6 times */ 
	{ -525, 20, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v401 p1262/V2 used 5 times */ 
	{ -518, -19, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v402 p879/V2 used 6 times */ 
	{ -473, -106, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v403 p1260/V2 used 10 times */ 
	{ -414, -117, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v404 p1253/V2 used 4 times */ 
	{ -473, -106, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v405 p875/V2 used 11 times */ 
	{ -495, -52, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v406 p1258/V2 used 6 times */ 
	{ -413, -83, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v407 p1256/V2 used 6 times */ 
	{ 471, -106, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v408 p1255/V2 used 9 times */ 
	{ -413, -83, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v409 p869/V2 used 5 times */ 
	{ 411, -117, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v410 p1254/V2 used 5 times */ 
	{ -549, -32, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v411 p1251/V2 used 4 times */ 
	{ -549, 73, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v412 p854/V2 used 4 times */ 
	{ 547, 73, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v413 p859/V2 used 5 times */ 
	{ 466, 74, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v414 p1227/V2 used 4 times */ 
	{ 468, 72, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v415 p1240/V1 used 13 times */ 
	{ 463, 67, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v416 p1240/V3 used 6 times */ 
	{ 462, 66, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v417 p1235/V2 used 13 times */ 
	{ 463, 69, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v418 p1240/V2 used 5 times */ 
	{ 462, 66, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v419 p835/V2 used 7 times */ 
	{ 463, 70, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v420 p1239/V2 used 5 times */ 
	{ 462, 71, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v421 p1238/V2 used 5 times */ 
	{ 461, 72, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v422 p1237/V2 used 6 times */ 
	{ 451, 76, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v423 p1236/V2 used 9 times */ 
	{ 451, 76, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v424 p843/V2 used 12 times */ 
	{ 451, 53, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v425 p1230/V2 used 4 times */ 
	{ 461, 66, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v426 p1216/V2 used 5 times */ 
	{ 456, 62, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v427 p1232/V2 used 9 times */ 
	{ 456, 72, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v428 p1234/V2 used 5 times */ 
	{ 456, 66, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v429 p1233/V2 used 6 times */ 
	{ 456, 53, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v430 p822/V2 used 5 times */ 
	{ 459, 62, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v431 p1219/V2 used 5 times */ 
	{ 456, 53, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v432 p1231/V2 used 5 times */ 
	{ 459, 76, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v433 p1229/V2 used 6 times */ 
	{ 464, 75, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v434 p1228/V2 used 5 times */ 
	{ 469, 69, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v435 p1226/V2 used 5 times */ 
	{ 469, 67, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v436 p1225/V2 used 5 times */ 
	{ 468, 65, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v437 p1224/V2 used 5 times */ 
	{ 464, 63, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v438 p838/V2 used 12 times */ 
	{ 469, 53, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v439 p1221/V2 used 6 times */ 
	{ 459, 62, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v440 p833/V2 used 5 times */ 
	{ 459, 66, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v441 p1217/V2 used 5 times */ 
	{ 127, 6, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v442 p1214/V3 used 7 times */ 
	{ 198, 24, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v443 p1208/V2 used 17 times */ 
	{ 127, -11, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v444 p1206/V2 used 6 times */ 
	{ -93, 68, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v445 p1182/V2 used 7 times */ 
	{ -93, 41, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v446 p1180/V2 used 9 times */ 
	{ -54, -21, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v447 p1179/V2 used 6 times */ 
	{ -290, 59, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v448 p1167/V1 used 5 times */ 
	{ -346, -44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v449 p1165/V1 used 12 times */ 
	{ -352, -5, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v450 p1164/V2 used 7 times */ 
	{ -409, 46, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v451 p1163/V2 used 18 times */ 
	{ -250, 42, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v452 p1141/V1 used 7 times */ 
	{ -190, 33, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v453 p1137/V1 used 17 times */ 
	{ -209, 42, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v454 p1130/V2 used 8 times */ 
	{ -190, 6, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v455 p1137/V3 used 6 times */ 
	{ -120, 24, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v456 p1131/V2 used 17 times */ 
	{ 3, -1, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v457 p1103/V1 used 6 times */ 
	{ 36, 11, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v458 p1103/V3 used 5 times */ 
	{ 3, 17, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v459 p1067/V2 used 10 times */ 
	{ 60, 33, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v460 p1089/V2 used 10 times */ 
	{ 5, -30, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v461 p1094/V2 used 5 times */ 
	{ 3, -23, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v462 p1098/V2 used 4 times */ 
	{ 288, -15, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v463 p1021/V2 used 10 times */ 
	{ 285, -26, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v464 p1046/V2 used 5 times */ 
	{ 283, -29, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v465 p1050/V3 used 5 times */ 
	{ 287, -23, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v466 p1033/V2 used 5 times */ 
	{ 287, -19, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v467 p1029/V2 used 5 times */ 
	{ 224, -27, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v468 p1047/V2 used 21 times */ 
	{ 257, 14, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v469 p1038/V2 used 8 times */ 
	{ 287, 37, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v470 p1030/V2 used 12 times */ 
	{ 287, 74, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v471 p1022/V2 used 4 times */ 
	{ 374, 44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v472 p993/V1 used 17 times */ 
	{ 380, 16, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v473 p968/V2 used 6 times */ 
	{ 356, -35, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v474 p969/V2 used 16 times */ 
	{ 418, -45, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v475 p981/V2 used 17 times */ 
	{ 462, 80, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v476 p943/V3 used 5 times */ 
	{ 459, 80, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v477 p940/V2 used 5 times */ 
	{ 453, 79, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v478 p924/V2 used 5 times */ 
	{ 456, 80, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v479 p932/V2 used 5 times */ 
	{ 450, 78, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v480 p916/V2 used 7 times */ 
	{ 478, 72, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v481 p941/V2 used 17 times */ 
	{ 451, 46, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v482 p925/V2 used 17 times */ 
	{ 442, 74, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v483 p908/V2 used 5 times */ 
	{ 445, 79, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v484 p909/V2 used 5 times */ 
	{ 449, 82, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v485 p910/V2 used 9 times */ 
	{ -560, 20, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v486 p879/V1 used 11 times */ 
	{ -495, -52, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v487 p879/V3 used 5 times */ 
	{ -473, 147, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v488 p876/V2 used 11 times */ 
	{ 411, -83, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v489 p864/V2 used 8 times */ 
	{ -460, -75, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v490 p874/V2 used 6 times */ 
	{ 471, 147, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v491 p870/V2 used 11 times */ 
	{ 517, -76, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v492 p861/V2 used 10 times */ 
	{ 469, 69, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v493 p843/V3 used 12 times */ 
	{ 461, 72, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v494 p843/V1 used 6 times */ 
	{ 456, 72, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v495 p842/V2 used 5 times */ 
	{ 456, 66, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v496 p837/V2 used 8 times */ 
	{ 456, 62, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v497 p834/V2 used 9 times */ 
	{ 447, 53, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v498 p919/V2 used 4 times */ 
	{ 450, 51, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v499 p920/V2 used 5 times */ 
	{ 453, 49, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v500 p921/V2 used 5 times */ 
	{ 465, 49, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v501 p1598/V2 used 5 times */ 
	{ 475, 61, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v502 p1593/V2 used 6 times */ 
	{ 470, 53, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v503 p1596/V2 used 4 times */ 
	{ 476, 53, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v504 p1571/V2 used 4 times */ 
	{ 477, 56, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v505 p1572/V2 used 5 times */ 
	{ 479, 60, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v506 p1573/V2 used 5 times */ 
	{ 479, 68, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v507 p1575/V2 used 4 times */ 
	{ 459, 44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v508 p898/V2 used 5 times */ 
	{ 455, 44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v509 p899/V2 used 4 times */ 
	{ 459, 48, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v510 p923/V2 used 5 times */ 
	{ 456, 48, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v511 p922/V2 used 5 times */ 
	{ 462, 48, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v512 p926/V2 used 6 times */ 
	{ 465, 49, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v513 p927/V2 used 5 times */ 
	{ 475, 61, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v514 p934/V2 used 6 times */ 
	{ 474, 58, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v515 p931/V2 used 5 times */ 
	{ 470, 53, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v516 p929/V2 used 6 times */ 
	{ 472, 55, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v517 p930/V2 used 4 times */ 
	{ 466, 46, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v518 p896/V2 used 5 times */ 
	{ 463, 44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v519 p897/V2 used 5 times */ 
	{ 474, 70, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v520 p1588/V2 used 5 times */ 
	{ 473, 78, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v521 p1577/V2 used 5 times */ 
	{ 470, 81, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v522 p1578/V2 used 5 times */ 
	{ 475, 67, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v523 p936/V2 used 5 times */ 
	{ 474, 70, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v524 p937/V2 used 5 times */ 
	{ 470, 75, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v525 p939/V2 used 5 times */ 
	{ 479, 64, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v526 p891/V2 used 4 times */ 
	{ 479, 60, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v527 p892/V2 used 5 times */ 
	{ 468, 78, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v528 p942/V2 used 6 times */ 
	{ 465, 79, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v529 p943/V2 used 5 times */ 
	{ 448, 76, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v530 p1548/V2 used 4 times */ 
	{ 463, 84, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v531 p885/V2 used 3 times */ 
	{ 467, 83, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v532 p886/V2 used 5 times */ 
	{ 470, 81, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v533 p887/V2 used 5 times */ 
	{ 343, -19, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v534 p1513/V2 used 5 times */ 
	{ 382, -30, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v535 p1542/V2 used 5 times */ 
	{ 381, -26, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v536 p1543/V2 used 5 times */ 
	{ 380, -22, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v537 p1544/V2 used 6 times */ 
	{ 380, 16, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v538 p1546/V2 used 7 times */ 
	{ 385, -33, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v539 p1541/V2 used 5 times */ 
	{ 392, -37, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v540 p1539/V2 used 6 times */ 
	{ 388, -36, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v541 p1540/V2 used 5 times */ 
	{ 396, -49, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v542 p1515/V2 used 4 times */ 
	{ 374, -45, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v543 p956/V2 used 4 times */ 
	{ 380, -22, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v544 p962/V2 used 5 times */ 
	{ 380, 7, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v545 p1507/V2 used 5 times */ 
	{ 380, -3, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v546 p1506/V2 used 4 times */ 
	{ 396, -38, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v547 p1536/V2 used 5 times */ 
	{ 399, -37, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v548 p1535/V2 used 5 times */ 
	{ 449, -19, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v549 p1517/V2 used 5 times */ 
	{ 453, 0, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v550 p1518/V2 used 5 times */ 
	{ 436, 33, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v551 p1520/V2 used 5 times */ 
	{ 436, -35, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v552 p1516/V2 used 3 times */ 
	{ 411, -22, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v553 p1530/V2 used 5 times */ 
	{ 411, -26, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v554 p1531/V2 used 5 times */ 
	{ 409, -30, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v555 p1532/V2 used 5 times */ 
	{ 407, -33, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v556 p1533/V2 used 5 times */ 
	{ 403, -36, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v557 p1534/V2 used 5 times */ 
	{ 418, 44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v558 p950/V2 used 4 times */ 
	{ 396, 48, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v559 p949/V2 used 4 times */ 
	{ 409, 29, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v560 p1522/V2 used 6 times */ 
	{ 411, 25, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v561 p1523/V2 used 5 times */ 
	{ 411, 21, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v562 p1524/V2 used 6 times */ 
	{ 412, -12, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v563 p1526/V2 used 6 times */ 
	{ 453, 0, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v564 p952/V2 used 5 times */ 
	{ 412, -17, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v565 p977/V2 used 4 times */ 
	{ 343, 18, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v566 p1511/V2 used 5 times */ 
	{ 339, 0, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v567 p1512/V2 used 5 times */ 
	{ 356, 33, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v568 p1510/V2 used 4 times */ 
	{ 374, 44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v569 p1509/V2 used 5 times */ 
	{ 407, 32, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v570 p1504/V2 used 5 times */ 
	{ 385, 32, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v571 p1498/V2 used 5 times */ 
	{ 388, 35, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v572 p1499/V2 used 5 times */ 
	{ 392, 36, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v573 p1500/V2 used 5 times */ 
	{ 396, 37, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v574 p1501/V2 used 5 times */ 
	{ 399, 36, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v575 p1502/V2 used 5 times */ 
	{ 403, 35, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v576 p1503/V2 used 5 times */ 
	{ 411, 21, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v577 p982/V2 used 5 times */ 
	{ 412, -3, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v578 p1505/V2 used 4 times */ 
	{ 412, 2, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v579 p264/V3 used 2 times */ 
	{ -290, 42, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v580 p1493/V2 used 5 times */ 
	{ -260, -44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v581 p1496/V2 used 4 times */ 
	{ -260, -44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v582 p1139/V2 used 6 times */ 
	{ -250, -44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v583 p1138/V2 used 3 times */ 
	{ -290, -44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v584 p1140/V2 used 5 times */ 
	{ -290, 42, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v585 p1141/V3 used 4 times */ 
	{ -290, 85, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v586 p1166/V2 used 4 times */ 
	{ -250, 59, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v587 p1491/V2 used 5 times */ 
	{ -250, 59, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v588 p1167/V3 used 4 times */ 
	{ -369, 21, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v589 p1160/V2 used 6 times */ 
	{ -449, -44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v590 p1477/V2 used 4 times */ 
	{ -415, 85, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v591 p1473/V2 used 4 times */ 
	{ -352, 85, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v592 p1467/V2 used 4 times */ 
	{ -352, 58, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v593 p1468/V2 used 4 times */ 
	{ -352, 34, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v594 p1165/V2 used 6 times */ 
	{ -352, 12, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v595 p1161/V2 used 3 times */ 
	{ -352, -44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v596 p1483/V2 used 4 times */ 
	{ -346, -44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v597 p1484/V2 used 5 times */ 
	{ -312, -44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v598 p1143/V2 used 5 times */ 
	{ -334, -44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v599 p1144/V2 used 4 times */ 
	{ -359, -34, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v600 p1146/V2 used 4 times */ 
	{ -374, -10, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v601 p1147/V2 used 5 times */ 
	{ -392, 19, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v602 p1148/V2 used 5 times */ 
	{ -409, -44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v603 p1149/V2 used 3 times */ 
	{ -439, -44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v604 p1150/V2 used 5 times */ 
	{ -449, 24, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v605 p1152/V2 used 4 times */ 
	{ -449, 61, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v606 p1153/V2 used 5 times */ 
	{ -449, 85, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v607 p1154/V2 used 6 times */ 
	{ -426, 85, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v608 p1155/V2 used 4 times */ 
	{ -415, 85, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v609 p1156/V2 used 6 times */ 
	{ -402, 75, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v610 p1158/V2 used 4 times */ 
	{ -387, 51, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v611 p1159/V2 used 5 times */ 
	{ -146, 44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v612 p1115/V2 used 5 times */ 
	{ -159, 46, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v613 p1114/V2 used 6 times */ 
	{ -159, 46, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v614 p1440/V2 used 3 times */ 
	{ -176, 42, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v615 p1442/V2 used 5 times */ 
	{ -184, 38, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v616 p1443/V2 used 4 times */ 
	{ -154, 13, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v617 p1124/V2 used 5 times */ 
	{ -154, 5, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v618 p1123/V2 used 5 times */ 
	{ -115, -34, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v619 p1435/V2 used 5 times */ 
	{ -115, -19, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v620 p1436/V2 used 5 times */ 
	{ -115, 2, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v621 p1437/V2 used 5 times */ 
	{ -120, 24, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v622 p1438/V2 used 5 times */ 
	{ -176, 42, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v623 p1112/V2 used 5 times */ 
	{ -168, 44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v624 p1113/V2 used 4 times */ 
	{ -131, 37, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v625 p1116/V2 used 4 times */ 
	{ -156, 19, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v626 p1126/V2 used 5 times */ 
	{ -155, 16, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v627 p1125/V2 used 5 times */ 
	{ -160, 23, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v628 p1127/V2 used 5 times */ 
	{ -165, 27, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v629 p1128/V2 used 5 times */ 
	{ -172, 28, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v630 p1132/V2 used 6 times */ 
	{ -178, 27, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v631 p1133/V2 used 5 times */ 
	{ -183, 24, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v632 p1134/V2 used 5 times */ 
	{ -186, 21, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v633 p1135/V2 used 5 times */ 
	{ -189, 18, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v634 p1136/V2 used 5 times */ 
	{ -190, -44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v635 p1104/V2 used 4 times */ 
	{ -229, 21, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v636 p1448/V2 used 4 times */ 
	{ -190, -44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v637 p1449/V2 used 4 times */ 
	{ -190, -11, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v638 p1450/V2 used 4 times */ 
	{ -190, 42, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v639 p1444/V2 used 3 times */ 
	{ -209, 42, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v640 p1445/V2 used 5 times */ 
	{ -229, 24, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v641 p1447/V2 used 3 times */ 
	{ -153, -12, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v642 p1122/V2 used 5 times */ 
	{ -190, 14, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v643 p1137/V2 used 5 times */ 
	{ -229, 21, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v644 p1106/V2 used 3 times */ 
	{ -153, -44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v645 p1121/V2 used 5 times */ 
	{ -229, 42, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v646 p1108/V2 used 4 times */ 
	{ -93, 54, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v647 p1181/V2 used 6 times */ 
	{ -114, 54, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v648 p1174/V2 used 6 times */ 
	{ -114, 54, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v649 p1424/V2 used 3 times */ 
	{ -54, -44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v650 p1430/V2 used 4 times */ 
	{ -54, -21, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v651 p1431/V2 used 6 times */ 
	{ -93, 41, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v652 p1428/V2 used 6 times */ 
	{ -114, 41, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v653 p1427/V2 used 4 times */ 
	{ -33, 41, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v654 p1419/V2 used 3 times */ 
	{ -54, 72, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v655 p1176/V2 used 4 times */ 
	{ -33, 54, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v656 p1177/V2 used 3 times */ 
	{ -93, -44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v657 p1169/V2 used 4 times */ 
	{ -114, 51, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v658 p1172/V2 used 3 times */ 
	{ -114, 51, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v659 p1173/V2 used 3 times */ 
	{ 54, -39, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v660 p1052/V2 used 6 times */ 
	{ 23, -38, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v661 p1418/V2 used 6 times */ 
	{ 27, -36, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v662 p1414/V2 used 5 times */ 
	{ 15, -38, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v663 p1415/V2 used 6 times */ 
	{ 67, -28, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v664 p1051/V2 used 3 times */ 
	{ 74, -14, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v665 p1407/V2 used 4 times */ 
	{ 36, -14, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v666 p1408/V2 used 4 times */ 
	{ 36, -19, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v667 p1409/V2 used 5 times */ 
	{ 35, -23, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v668 p1410/V2 used 5 times */ 
	{ 34, -27, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v669 p1411/V2 used 5 times */ 
	{ 33, -30, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v670 p1412/V2 used 5 times */ 
	{ 30, -34, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v671 p1413/V2 used 5 times */ 
	{ 19, -49, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v672 p1080/V2 used 9 times */ 
	{ 38, -47, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v673 p1053/V2 used 4 times */ 
	{ -3, -45, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v674 p1099/V2 used 16 times */ 
	{ 17, -39, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v675 p1375/V2 used 2 times */ 
	{ 12, -36, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v676 p1377/V2 used 5 times */ 
	{ 3, -18, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v677 p1382/V2 used 5 times */ 
	{ 5, -30, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v678 p1379/V2 used 5 times */ 
	{ 3, -23, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v679 p1381/V2 used 6 times */ 
	{ 8, -34, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v680 p1378/V2 used 5 times */ 
	{ 36, 17, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v681 p1404/V2 used 5 times */ 
	{ 77, -1, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v682 p1383/V2 used 3 times */ 
	{ 35, 21, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v683 p1403/V2 used 5 times */ 
	{ 33, 28, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v684 p1401/V2 used 6 times */ 
	{ 34, 25, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v685 p1402/V2 used 5 times */ 
	{ 30, 32, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v686 p1398/V2 used 5 times */ 
	{ 19, 47, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v687 p1061/V2 used 4 times */ 
	{ 8, 32, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v688 p1392/V2 used 6 times */ 
	{ 12, 34, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v689 p1393/V2 used 5 times */ 
	{ 15, 36, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v690 p1394/V2 used 5 times */ 
	{ 19, 36, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v691 p1395/V2 used 5 times */ 
	{ -38, -1, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v692 p1390/V2 used 5 times */ 
	{ -3, 43, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v693 p1387/V2 used 4 times */ 
	{ -21, 33, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v694 p1388/V2 used 5 times */ 
	{ -33, 17, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v695 p1389/V2 used 4 times */ 
	{ 23, 36, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v696 p1396/V2 used 5 times */ 
	{ 27, 34, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v697 p1397/V2 used 5 times */ 
	{ 41, 43, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v698 p1062/V2 used 5 times */ 
	{ 77, -1, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v699 p1064/V2 used 4 times */ 
	{ 5, 28, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v700 p1370/V2 used 5 times */ 
	{ -38, -1, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v701 p1058/V2 used 5 times */ 
	{ -33, -20, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v702 p1057/V2 used 4 times */ 
	{ 3, 21, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v703 p1368/V2 used 4 times */ 
	{ 4, 25, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v704 p1369/V2 used 5 times */ 
	{ 172, 44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v705 p1192/V2 used 5 times */ 
	{ 159, 46, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v706 p1191/V2 used 6 times */ 
	{ 159, 46, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v707 p1341/V2 used 3 times */ 
	{ 141, 42, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v708 p1343/V2 used 5 times */ 
	{ 134, 38, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v709 p1344/V2 used 6 times */ 
	{ 163, 16, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v710 p1202/V2 used 5 times */ 
	{ 161, 19, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v711 p1203/V2 used 5 times */ 
	{ 164, 13, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v712 p1201/V2 used 4 times */ 
	{ 158, 23, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v713 p1204/V2 used 5 times */ 
	{ 153, 27, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v714 p1205/V2 used 5 times */ 
	{ 146, 28, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v715 p1209/V2 used 6 times */ 
	{ 128, 35, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v716 p1187/V2 used 6 times */ 
	{ 139, 27, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v717 p1210/V2 used 5 times */ 
	{ 134, 24, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v718 p1211/V2 used 5 times */ 
	{ 131, 21, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v719 p1212/V2 used 5 times */ 
	{ 129, 18, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v720 p1213/V2 used 5 times */ 
	{ 127, 6, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v721 p1350/V2 used 4 times */ 
	{ 109, 42, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v722 p1346/V2 used 4 times */ 
	{ 134, 38, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v723 p1188/V2 used 3 times */ 
	{ 128, 14, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v724 p1214/V2 used 5 times */ 
	{ 203, -44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v725 p1335/V2 used 5 times */ 
	{ 203, -34, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v726 p1336/V2 used 5 times */ 
	{ 198, 24, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v727 p1339/V2 used 5 times */ 
	{ 164, -44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v728 p1334/V2 used 5 times */ 
	{ 127, -44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v729 p1183/V2 used 4 times */ 
	{ 89, 42, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v730 p1185/V2 used 4 times */ 
	{ 128, 42, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v731 p1186/V2 used 3 times */ 
	{ 164, -44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v732 p1198/V2 used 4 times */ 
	{ 203, 2, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v733 p1194/V2 used 4 times */ 
	{ 282, 40, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v734 p1019/V2 used 6 times */ 
	{ 282, 40, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v735 p1293/V2 used 3 times */ 
	{ 283, 27, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v736 p1333/V2 used 5 times */ 
	{ 272, 44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v737 p1295/V2 used 4 times */ 
	{ 239, 39, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v738 p1297/V2 used 5 times */ 
	{ 269, 31, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v739 p1028/V2 used 5 times */ 
	{ 276, 31, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v740 p1026/V2 used 5 times */ 
	{ 272, 31, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v741 p1027/V2 used 5 times */ 
	{ 283, 27, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v742 p1024/V2 used 6 times */ 
	{ 285, 24, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v743 p998/V2 used 5 times */ 
	{ 265, 29, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v744 p1031/V2 used 6 times */ 
	{ 222, 21, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v745 p1015/V2 used 4 times */ 
	{ 215, -2, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v746 p1298/V2 used 3 times */ 
	{ 257, 14, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v747 p1321/V2 used 5 times */ 
	{ 224, -27, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v748 p1299/V2 used 5 times */ 
	{ 237, -39, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v749 p1302/V2 used 5 times */ 
	{ 262, 27, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v750 p1032/V2 used 5 times */ 
	{ 258, -23, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v751 p1041/V2 used 5 times */ 
	{ 259, -26, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v752 p1042/V2 used 5 times */ 
	{ 276, -44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v753 p1305/V2 used 5 times */ 
	{ 259, 24, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v754 p1035/V2 used 6 times */ 
	{ 258, 21, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v755 p1036/V2 used 5 times */ 
	{ 257, 18, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v756 p1037/V2 used 5 times */ 
	{ 287, 18, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v757 p996/V2 used 4 times */ 
	{ 257, -19, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v758 p1040/V2 used 4 times */ 
	{ 257, -8, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v759 p1000/V2 used 5 times */ 
	{ 257, 1, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v760 p999/V2 used 3 times */ 
	{ 262, -29, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v761 p1043/V2 used 5 times */ 
	{ 265, -31, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v762 p1044/V2 used 5 times */ 
	{ 269, -32, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v763 p1045/V2 used 5 times */ 
	{ 296, -44, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v764 p1307/V2 used 5 times */ 
	{ 276, -44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v765 p1007/V2 used 3 times */ 
	{ 242, -42, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v766 p1010/V2 used 5 times */ 
	{ 326, 85, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v767 p1290/V2 used 4 times */ 
	{ 272, -33, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v768 p1048/V2 used 6 times */ 
	{ 307, -44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v769 p1004/V2 used 5 times */ 
	{ 296, -44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v770 p1005/V2 used 5 times */ 
	{ 287, 85, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v771 p1020/V2 used 4 times */ 
	{ 279, -31, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v772 p1050/V2 used 5 times */ 
	{ 276, -32, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v773 p1049/V2 used 5 times */ 
	{ 228, -32, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v774 p1013/V2 used 5 times */ 
	{ 237, -39, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v775 p1011/V2 used 5 times */ 
	{ 288, 1, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v776 p1001/V2 used 5 times */ 
	{ 326, -44, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v777 p1003/V2 used 4 times */ 
	{ 288, -3, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v778 p717/V2 used 3 times */ 
	{ 277, 42, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v779 p1018/V2 used 3 times */ 
	{ 547, 73, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v780 p1246/V2 used 5 times */ 
	{ 471, 147, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v781 p1247/V2 used 4 times */ 
	{ 493, 94, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v782 p866/V2 used 5 times */ 
	{ 458, 116, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v783 p867/V2 used 5 times */ 
	{ 411, 124, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v784 p1272/V2 used 5 times */ 
	{ 411, 158, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v785 p857/V2 used 5 times */ 
	{ -495, 94, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v786 p1266/V2 used 5 times */ 
	{ -414, 158, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v787 p856/V2 used 4 times */ 
	{ 557, 20, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v788 p1245/V2 used 4 times */ 
	{ -460, 116, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v789 p872/V2 used 5 times */ 
	{ -413, 124, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v790 p871/V2 used 5 times */ 
	{ -520, 117, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v791 p855/V2 used 4 times */ 
	{ 517, -76, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v792 p1244/V2 used 5 times */ 
	{ 411, -83, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v793 p1242/V2 used 6 times */ 
	{ -520, -76, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v794 p1252/V2 used 5 times */ 
	{ -518, -19, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v795 p1261/V2 used 5 times */ 
	{ -525, 20, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v796 p878/V2 used 5 times */ 
	{ -518, 61, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v797 p877/V2 used 5 times */ 
	{ -460, -75, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v798 p1257/V2 used 4 times */ 
	{ -520, -76, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v799 p852/V2 used 4 times */ 
	{ 411, -117, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v800 p850/V2 used 5 times */ 
	{ 471, -106, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v801 p849/V2 used 4 times */ 
	{ -414, -117, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v802 p851/V2 used 5 times */ 
	{ 468, 72, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v803 p827/V2 used 5 times */ 
	{ 463, 70, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v804 p840/V2 used 5 times */ 
	{ 463, 69, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v805 p839/V2 used 6 times */ 
	{ 462, 71, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v806 p841/V2 used 5 times */ 
	{ 463, 53, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v807 p1220/V2 used 5 times */ 
	{ 464, 63, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v808 p1222/V2 used 4 times */ 
	{ 466, 64, 98, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v809 p1223/V2 used 5 times */ 
	{ 464, 75, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v810 p825/V2 used 5 times */ 
	{ 466, 74, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v811 p826/V2 used 5 times */ 
	{ 469, 67, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v812 p828/V2 used 4 times */ 
	{ 466, 64, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v813 p830/V2 used 5 times */ 
	{ 468, 65, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v814 p829/V2 used 5 times */ 
	{ 463, 67, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v815 p836/V2 used 4 times */ 
	{ 459, 66, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v816 p819/V2 used 5 times */ 
	{ 451, 53, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v817 p823/V2 used 5 times */ 
	{ 459, 76, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v818 p824/V2 used 3 times */ 
	{ 463, 53, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v819 p832/V2 used 5 times */ 
	{ 461, 66, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v820 p820/V2 used 5 times */ 
	{ 469, 53, -97, 0, 0, 511,  230, 0, 0, 255 /* vertex color */  },   /* v821 p831/V2 used 3 times */ 
};

Gfx nintendo_logo_grp_g1[] = {
    gsDPSetTextureFilter(G_TF_BILERP),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_SHADING_SMOOTH),
	gsSPVertex(nintendo_logo_v + 0, 15, 0),
	gsSP1Triangle(8, 6, 0, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0), 
	gsSP1Triangle(0, 3, 4, 0), 
	gsSP1Triangle(0, 4, 5, 0), 
	gsSP1Triangle(6, 1, 0, 0), 
	gsSP1Triangle(7, 8, 0, 0), 
	gsSP1Triangle(9, 10, 0, 0), 
	gsSP1Triangle(0, 11, 12, 0), 
	gsSP1Triangle(0, 12, 13, 0), 
	gsSP1Triangle(0, 13, 9, 0), 
	gsSP1Triangle(10, 7, 0, 0), 
	gsSP1Triangle(0, 5, 14, 0), 
	gsSPVertex(nintendo_logo_v + 9, 5, 0),
	gsSPVertex(nintendo_logo_v + 17, 9, 5),
	gsSPVertex(nintendo_logo_v + 482, 1, 14),
	gsSP1Triangle(2, 12, 9, 0),
	gsSP1Triangle(0, 4, 6, 0),
	gsSP1Triangle(4, 3, 7, 0), 
	gsSP1Triangle(4, 7, 6, 0), 
	gsSP1Triangle(0, 6, 8, 0), 
	gsSP1Triangle(1, 0, 8, 0), 
	gsSP1Triangle(7, 3, 9, 0), 
	gsSP1Triangle(2, 9, 3, 0), 
	gsSP1Triangle(10, 2, 14, 0), 
	gsSP1Triangle(2, 11, 14, 0), 
	gsSP1Triangle(2, 5, 11, 0), 
	gsSPVertex(nintendo_logo_v + 7, 1, 0),
	gsSPVertex(nintendo_logo_v + 10, 2, 1),
	gsSPVertex(nintendo_logo_v + 19, 3, 3),
	gsSPVertex(nintendo_logo_v + 24, 1, 6),
	gsSPVertex(nintendo_logo_v + 28, 2, 7),
	gsSPVertex(nintendo_logo_v + 34, 1, 9),
	gsSPVertex(nintendo_logo_v + 498, 3, 10),
	gsSPVertex(nintendo_logo_v + 511, 1, 13),
	gsSP1Triangle(8, 7, 13, 0),
	gsSP1Triangle(2, 7, 8, 0),
	gsSP1Triangle(2, 8, 6, 0), 
	gsSP1Triangle(0, 1, 9, 0), 
	gsSP1Triangle(1, 4, 9, 0), 
	gsSP1Triangle(3, 5, 10, 0), 
	gsSP1Triangle(5, 6, 11, 0), 
	gsSP1Triangle(5, 11, 10, 0), 
	gsSP1Triangle(6, 12, 11, 0), 
	gsSP1Triangle(6, 8, 12, 0), 
	gsSP1Triangle(8, 13, 12, 0), 
	gsSPVertex(nintendo_logo_v + 11, 1, 0),
	gsSPVertex(nintendo_logo_v + 25, 4, 1),
	gsSPVertex(nintendo_logo_v + 32, 1, 5),
	gsSPVertex(nintendo_logo_v + 35, 1, 6),
	gsSPVertex(nintendo_logo_v + 40, 1, 7),
	gsSPVertex(nintendo_logo_v + 501, 2, 8),
	gsSPVertex(nintendo_logo_v + 504, 1, 10),
	gsSPVertex(nintendo_logo_v + 510, 4, 11),
	gsSP1Triangle(6, 13, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0), 
	gsSP1Triangle(0, 3, 4, 0), 
	gsSP1Triangle(4, 3, 11, 0), 
	gsSP1Triangle(4, 11, 12, 0), 
	gsSP1Triangle(3, 2, 13, 0), 
	gsSP1Triangle(3, 13, 11, 0), 
	gsSP1Triangle(2, 8, 14, 0), 
	gsSP1Triangle(2, 14, 13, 0), 
	gsSP1Triangle(1, 8, 2, 0), 
	gsSP1Triangle(6, 10, 1, 0), 
	gsSP1Triangle(6, 1, 5, 0), 
	gsSP1Triangle(1, 9, 7, 0), 
	gsSP1Triangle(0, 5, 1, 0), 
	gsSPVertex(nintendo_logo_v + 7, 2, 0),
	gsSPVertex(nintendo_logo_v + 25, 1, 2),
	gsSPVertex(nintendo_logo_v + 34, 1, 3),
	gsSPVertex(nintendo_logo_v + 36, 5, 4),
	gsSPVertex(nintendo_logo_v + 501, 1, 9),
	gsSPVertex(nintendo_logo_v + 503, 1, 10),
	gsSPVertex(nintendo_logo_v + 513, 1, 11),
	gsSPVertex(nintendo_logo_v + 515, 3, 12),
	gsSP1Triangle(2, 8, 7, 0),
	gsSP1Triangle(2, 7, 10, 0), 
	gsSP1Triangle(2, 10, 6, 0), 
	gsSP1Triangle(2, 6, 9, 0), 
	gsSP1Triangle(0, 3, 4, 0), 
	gsSP1Triangle(1, 0, 4, 0), 
	gsSP1Triangle(5, 9, 6, 0), 
	gsSP1Triangle(5, 11, 9, 0), 
	gsSP1Triangle(6, 10, 13, 0), 
	gsSP1Triangle(6, 13, 5, 0), 
	gsSP1Triangle(7, 13, 10, 0), 
	gsSP1Triangle(7, 12, 14, 0), 
	gsSP1Triangle(7, 8, 12, 0), 
	gsSP1Triangle(7, 14, 13, 0), 
	gsSPVertex(nintendo_logo_v + 25, 1, 0),
	gsSPVertex(nintendo_logo_v + 40, 5, 1),
	gsSPVertex(nintendo_logo_v + 47, 2, 6),
	gsSPVertex(nintendo_logo_v + 50, 1, 8),
	gsSPVertex(nintendo_logo_v + 481, 1, 9),
	gsSPVertex(nintendo_logo_v + 502, 1, 10),
	gsSPVertex(nintendo_logo_v + 507, 1, 11),
	gsSPVertex(nintendo_logo_v + 514, 2, 12),
	gsSPVertex(nintendo_logo_v + 520, 1, 14),
	gsSP1Triangle(0, 3, 10, 0),
	gsSP1Triangle(1, 10, 12, 0), 
	gsSP1Triangle(1, 12, 13, 0), 
	gsSP1Triangle(2, 10, 6, 0), 
	gsSP1Triangle(2, 12, 10, 0), 
	gsSP1Triangle(3, 6, 10, 0), 
	gsSP1Triangle(4, 3, 9, 0), 
	gsSP1Triangle(5, 9, 3, 0), 
	gsSP1Triangle(5, 3, 11, 0), 
	gsSP1Triangle(3, 8, 14, 0), 
	gsSP1Triangle(3, 14, 7, 0), 
	gsSP1Triangle(3, 7, 6, 0), 
	gsSP1Triangle(0, 11, 3, 0), 
	gsSP1Triangle(9, 12, 2, 0), 
	gsSPVertex(nintendo_logo_v + 6, 1, 0),
	gsSPVertex(nintendo_logo_v + 8, 1, 1),
	gsSPVertex(nintendo_logo_v + 36, 1, 2),
	gsSPVertex(nintendo_logo_v + 41, 1, 3),
	gsSPVertex(nintendo_logo_v + 45, 6, 4),
	gsSPVertex(nintendo_logo_v + 520, 1, 10),
	gsSPVertex(nintendo_logo_v + 523, 2, 11),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(1, 4, 5, 0),
	gsSP1Triangle(1, 5, 0, 0), 
	gsSP1Triangle(1, 2, 4, 0), 
	gsSP1Triangle(6, 7, 11, 0), 
	gsSP1Triangle(6, 11, 3, 0), 
	gsSP1Triangle(7, 10, 12, 0), 
	gsSP1Triangle(7, 12, 11, 0), 
	gsSP1Triangle(8, 12, 10, 0), 
	gsSPVertex(nintendo_logo_v + 42, 1, 0),
	gsSPVertex(nintendo_logo_v + 49, 6, 1),
	gsSPVertex(nintendo_logo_v + 56, 1, 7),
	gsSPVertex(nintendo_logo_v + 62, 1, 8),
	gsSPVertex(nintendo_logo_v + 64, 1, 9),
	gsSPVertex(nintendo_logo_v + 525, 1, 10),
	gsSPVertex(nintendo_logo_v + 528, 2, 11),
	gsSP1Triangle(6, 11, 12, 0),
	gsSP1Triangle(0, 3, 2, 0),
	gsSP1Triangle(0, 5, 4, 0), 
	gsSP1Triangle(2, 3, 10, 0), 
	gsSP1Triangle(2, 10, 1, 0), 
	gsSP1Triangle(3, 4, 11, 0), 
	gsSP1Triangle(3, 11, 10, 0), 
	gsSP1Triangle(0, 4, 3, 0), 
	gsSP1Triangle(4, 8, 12, 0), 
	gsSP1Triangle(4, 12, 11, 0), 
	gsSP1Triangle(5, 8, 4, 0), 
	gsSP1Triangle(6, 7, 5, 0), 
	gsSP1Triangle(6, 5, 9, 0), 
	gsSP1Triangle(5, 7, 8, 0), 
	gsSP1Triangle(0, 9, 5, 0), 
	gsSPVertex(nintendo_logo_v + 1, 1, 0),
	gsSPVertex(nintendo_logo_v + 6, 1, 1),
	gsSPVertex(nintendo_logo_v + 46, 1, 2),
	gsSPVertex(nintendo_logo_v + 55, 8, 3),
	gsSPVertex(nintendo_logo_v + 77, 1, 11),
	gsSPVertex(nintendo_logo_v + 476, 1, 12),
	gsSPVertex(nintendo_logo_v + 529, 2, 13),
	gsSP1Triangle(1, 2, 3, 0),
	gsSP1Triangle(1, 3, 14, 0), 
	gsSP1Triangle(4, 1, 14, 0), 
	gsSP1Triangle(1, 5, 6, 0), 
	gsSP1Triangle(1, 6, 7, 0), 
	gsSP1Triangle(1, 7, 8, 0), 
	gsSP1Triangle(1, 8, 9, 0), 
	gsSP1Triangle(1, 9, 0, 0), 
	gsSP1Triangle(1, 4, 5, 0), 
	gsSP1Triangle(10, 11, 12, 0), 
	gsSP1Triangle(10, 12, 13, 0), 
	gsSP1Triangle(4, 11, 10, 0), 
	gsSPVertex(nintendo_logo_v + 42, 1, 0),
	gsSPVertex(nintendo_logo_v + 54, 1, 1),
	gsSPVertex(nintendo_logo_v + 56, 2, 2),
	gsSPVertex(nintendo_logo_v + 63, 3, 4),
	gsSPVertex(nintendo_logo_v + 77, 5, 7),
	gsSPVertex(nintendo_logo_v + 530, 3, 12),
	gsSP1Triangle(4, 3, 2, 0),
	gsSP1Triangle(1, 4, 2, 0), 
	gsSP1Triangle(2, 12, 11, 0), 
	gsSP1Triangle(2, 11, 10, 0), 
	gsSP1Triangle(2, 10, 9, 0), 
	gsSP1Triangle(2, 9, 8, 0), 
	gsSP1Triangle(2, 8, 7, 0), 
	gsSP1Triangle(1, 5, 13, 0), 
	gsSP1Triangle(5, 6, 14, 0), 
	gsSP1Triangle(5, 14, 13, 0), 
	gsSP1Triangle(0, 6, 5, 0), 
	gsSP1Triangle(1, 13, 14, 0), 
	gsSPVertex(nintendo_logo_v + 25, 1, 0),
	gsSPVertex(nintendo_logo_v + 42, 3, 1),
	gsSPVertex(nintendo_logo_v + 65, 4, 4),
	gsSPVertex(nintendo_logo_v + 481, 1, 8),
	gsSPVertex(nintendo_logo_v + 507, 1, 9),
	gsSPVertex(nintendo_logo_v + 521, 2, 10),
	gsSPVertex(nintendo_logo_v + 532, 2, 12),
	gsSP1Triangle(4, 11, 13, 0),
	gsSP1Triangle(4, 13, 12, 0), 
	gsSP1Triangle(1, 11, 4, 0), 
	gsSP1Triangle(5, 13, 11, 0), 
	gsSP1Triangle(5, 11, 10, 0), 
	gsSP1Triangle(1, 10, 11, 0), 
	gsSP1Triangle(6, 5, 10, 0), 
	gsSP1Triangle(6, 10, 2, 0), 
	gsSP1Triangle(1, 2, 10, 0), 
	gsSP1Triangle(2, 8, 6, 0), 
	gsSP1Triangle(7, 3, 9, 0), 
	gsSP1Triangle(0, 7, 9, 0), 
	gsSPVertex(nintendo_logo_v + 11, 1, 0),
	gsSPVertex(nintendo_logo_v + 25, 1, 1),
	gsSPVertex(nintendo_logo_v + 31, 2, 2),
	gsSPVertex(nintendo_logo_v + 35, 1, 4),
	gsSPVertex(nintendo_logo_v + 44, 1, 5),
	gsSPVertex(nintendo_logo_v + 68, 4, 6),
	gsSPVertex(nintendo_logo_v + 504, 3, 10),
	gsSPVertex(nintendo_logo_v + 526, 2, 13),
	gsSP1Triangle(6, 14, 13, 0),
	gsSP1Triangle(6, 13, 5, 0), 
	gsSP1Triangle(6, 12, 14, 0), 
	gsSP1Triangle(1, 12, 6, 0), 
	gsSP1Triangle(7, 14, 12, 0), 
	gsSP1Triangle(7, 12, 11, 0), 
	gsSP1Triangle(1, 11, 12, 0), 
	gsSP1Triangle(8, 7, 11, 0), 
	gsSP1Triangle(8, 11, 10, 0), 
	gsSP1Triangle(1, 10, 11, 0), 
	gsSP1Triangle(4, 8, 10, 0), 
	gsSP1Triangle(4, 3, 9, 0), 
	gsSP1Triangle(9, 3, 2, 0), 
	gsSP1Triangle(0, 2, 3, 0), 
	gsSPVertex(nintendo_logo_v + 16, 2, 1),
	gsSPVertex(nintendo_logo_v + 22, 2, 3),
	gsSPVertex(nintendo_logo_v + 30, 2, 5),
	gsSPVertex(nintendo_logo_v + 33, 1, 7),
	gsSPVertex(nintendo_logo_v + 71, 2, 8),
	gsSPVertex(nintendo_logo_v + 482, 1, 10),
	gsSPVertex(nintendo_logo_v + 508, 2, 11),
	gsSPVertex(nintendo_logo_v + 518, 2, 13),
	gsSP1Triangle(5, 13, 6, 0),
	gsSP1Triangle(8, 6, 13, 0), 
	gsSP1Triangle(0, 5, 6, 0), 
	gsSP1Triangle(5, 14, 13, 0), 
	gsSP1Triangle(7, 14, 5, 0), 
	gsSP1Triangle(0, 7, 5, 0), 
	gsSP1Triangle(3, 11, 7, 0), 
	gsSP1Triangle(7, 11, 14, 0), 
	gsSP1Triangle(0, 3, 7, 0), 
	gsSP1Triangle(3, 10, 12, 0), 
	gsSP1Triangle(3, 12, 11, 0), 
	gsSP1Triangle(9, 4, 2, 0), 
	gsSP1Triangle(9, 2, 1, 0), 
	gsSP1Triangle(10, 4, 9, 0), 
	gsSPVertex(nintendo_logo_v + 0, 3, 0),
	gsSPVertex(nintendo_logo_v + 4, 2, 3),
	gsSPVertex(nintendo_logo_v + 14, 4, 5),
	gsSPVertex(nintendo_logo_v + 61, 1, 9),
	gsSPVertex(nintendo_logo_v + 72, 4, 10),
	gsSP1Triangle(13, 1, 9, 0),
	gsSP1Triangle(11, 10, 7, 0),
	gsSP1Triangle(11, 7, 6, 0), 
	gsSP1Triangle(0, 6, 7, 0), 
	gsSP1Triangle(0, 7, 8, 0), 
	gsSP1Triangle(12, 11, 6, 0), 
	gsSP1Triangle(12, 6, 5, 0), 
	gsSP1Triangle(0, 5, 6, 0), 
	gsSP1Triangle(12, 5, 4, 0), 
	gsSP1Triangle(12, 4, 3, 0), 
	gsSP1Triangle(13, 2, 1, 0), 
	gsSPVertex(nintendo_logo_v + 57, 5, 0),
	gsSPVertex(nintendo_logo_v + 63, 1, 5),
	gsSPVertex(nintendo_logo_v + 75, 4, 6),
	gsSPVertex(nintendo_logo_v + 476, 2, 10),
	gsSPVertex(nintendo_logo_v + 483, 3, 12),
	gsSP1Triangle(8, 11, 10, 0),
	gsSP1Triangle(7, 6, 4, 0),
	gsSP1Triangle(7, 4, 3, 0), 
	gsSP1Triangle(3, 2, 12, 0), 
	gsSP1Triangle(3, 12, 7, 0), 
	gsSP1Triangle(2, 1, 13, 0), 
	gsSP1Triangle(2, 13, 12, 0), 
	gsSP1Triangle(1, 14, 13, 0), 
	gsSP1Triangle(1, 0, 14, 0), 
	gsSP1Triangle(5, 14, 0, 0), 
	gsSP1Triangle(8, 9, 11, 0), 
	gsSPVertex(nintendo_logo_v + 55, 1, 0),
	gsSPVertex(nintendo_logo_v + 78, 7, 1),
	gsSPVertex(nintendo_logo_v + 474, 1, 8),
	gsSPVertex(nintendo_logo_v + 477, 4, 9),
	gsSPVertex(nintendo_logo_v + 530, 1, 13),
	gsSPVertex(nintendo_logo_v + 534, 1, 14),
	gsSP1Triangle(6, 7, 14, 0),
	gsSP1Triangle(1, 2, 11, 0),
	gsSP1Triangle(1, 11, 9, 0), 
	gsSP1Triangle(2, 3, 10, 0), 
	gsSP1Triangle(2, 10, 11, 0), 
	gsSP1Triangle(3, 4, 12, 0), 
	gsSP1Triangle(3, 12, 10, 0), 
	gsSP1Triangle(4, 13, 0, 0), 
	gsSP1Triangle(4, 0, 12, 0), 
	gsSP1Triangle(5, 7, 8, 0), 
	gsSP1Triangle(6, 8, 7, 0), 
	gsSPVertex(nintendo_logo_v + 84, 2, 0),
	gsSPVertex(nintendo_logo_v + 87, 6, 2),
	gsSPVertex(nintendo_logo_v + 473, 1, 8),
	gsSPVertex(nintendo_logo_v + 536, 3, 9),
	gsSPVertex(nintendo_logo_v + 544, 3, 12),
	gsSP1Triangle(6, 10, 12, 0),
	gsSP1Triangle(0, 9, 10, 0),
	gsSP1Triangle(0, 10, 5, 0), 
	gsSP1Triangle(0, 5, 11, 0), 
	gsSP1Triangle(0, 11, 1, 0), 
	gsSP1Triangle(1, 2, 0, 0), 
	gsSP1Triangle(3, 8, 11, 0), 
	gsSP1Triangle(4, 1, 11, 0), 
	gsSP1Triangle(4, 11, 8, 0), 
	gsSP1Triangle(3, 11, 13, 0), 
	gsSP1Triangle(5, 13, 11, 0), 
	gsSP1Triangle(4, 2, 1, 0), 
	gsSP1Triangle(6, 5, 10, 0), 
	gsSP1Triangle(6, 14, 5, 0), 
	gsSP1Triangle(5, 14, 13, 0), 
	gsSP1Triangle(7, 12, 10, 0), 
	gsSP1Triangle(7, 10, 9, 0), 
	gsSPVertex(nintendo_logo_v + 92, 7, 1),
	gsSPVertex(nintendo_logo_v + 535, 2, 8),
	gsSPVertex(nintendo_logo_v + 539, 3, 10),
	gsSPVertex(nintendo_logo_v + 547, 1, 13),
	gsSP1Triangle(0, 8, 9, 0),
	gsSP1Triangle(0, 10, 8, 0), 
	gsSP1Triangle(2, 1, 9, 0), 
	gsSP1Triangle(2, 9, 8, 0), 
	gsSP1Triangle(3, 8, 10, 0), 
	gsSP1Triangle(3, 2, 8, 0), 
	gsSP1Triangle(4, 3, 10, 0), 
	gsSP1Triangle(4, 10, 12, 0), 
	gsSP1Triangle(0, 12, 10, 0), 
	gsSP1Triangle(5, 4, 12, 0), 
	gsSP1Triangle(5, 12, 11, 0), 
	gsSP1Triangle(0, 11, 12, 0), 
	gsSP1Triangle(6, 5, 11, 0), 
	gsSP1Triangle(6, 11, 13, 0), 
	gsSP1Triangle(7, 13, 11, 0), 
	gsSP1Triangle(0, 7, 11, 0), 
	gsSPVertex(nintendo_logo_v + 98, 3, 1),
	gsSPVertex(nintendo_logo_v + 109, 1, 4),
	gsSPVertex(nintendo_logo_v + 121, 1, 5),
	gsSPVertex(nintendo_logo_v + 475, 1, 6),
	gsSPVertex(nintendo_logo_v + 542, 1, 7),
	gsSPVertex(nintendo_logo_v + 547, 7, 8),
	gsSP1Triangle(2, 10, 13, 0),
	gsSP1Triangle(2, 1, 6, 0),
	gsSP1Triangle(2, 13, 1, 0), 
	gsSP1Triangle(3, 6, 1, 0), 
	gsSP1Triangle(3, 1, 7, 0), 
	gsSP1Triangle(1, 9, 8, 0), 
	gsSP1Triangle(1, 10, 11, 0), 
	gsSP1Triangle(1, 11, 5, 0), 
	gsSP1Triangle(1, 5, 12, 0), 
	gsSP1Triangle(1, 12, 4, 0), 
	gsSP1Triangle(1, 13, 10, 0), 
	gsSP1Triangle(0, 7, 1, 0), 
	gsSP1Triangle(1, 4, 14, 0), 
	gsSPVertex(nintendo_logo_v + 86, 2, 1),
	gsSPVertex(nintendo_logo_v + 89, 1, 3),
	gsSPVertex(nintendo_logo_v + 97, 2, 4),
	gsSPVertex(nintendo_logo_v + 101, 4, 6),
	gsSPVertex(nintendo_logo_v + 547, 2, 10),
	gsSPVertex(nintendo_logo_v + 556, 2, 12),
	gsSP1Triangle(5, 12, 13, 0),
	gsSP1Triangle(3, 6, 2, 0),
	gsSP1Triangle(6, 1, 2, 0), 
	gsSP1Triangle(2, 1, 0, 0), 
	gsSP1Triangle(7, 4, 10, 0), 
	gsSP1Triangle(7, 10, 11, 0), 
	gsSP1Triangle(8, 7, 11, 0), 
	gsSP1Triangle(8, 11, 13, 0), 
	gsSP1Triangle(5, 13, 11, 0), 
	gsSP1Triangle(9, 8, 13, 0), 
	gsSP1Triangle(9, 13, 12, 0), 
	gsSPVertex(nintendo_logo_v + 98, 1, 0),
	gsSPVertex(nintendo_logo_v + 104, 7, 1),
	gsSPVertex(nintendo_logo_v + 112, 1, 8),
	gsSPVertex(nintendo_logo_v + 553, 4, 9),
	gsSPVertex(nintendo_logo_v + 558, 2, 13),
	gsSP1Triangle(2, 1, 12, 0),
	gsSP1Triangle(2, 12, 11, 0), 
	gsSP1Triangle(0, 11, 12, 0), 
	gsSP1Triangle(3, 2, 11, 0), 
	gsSP1Triangle(3, 11, 10, 0), 
	gsSP1Triangle(0, 10, 11, 0), 
	gsSP1Triangle(4, 3, 10, 0), 
	gsSP1Triangle(4, 10, 9, 0), 
	gsSP1Triangle(0, 9, 10, 0), 
	gsSP1Triangle(5, 4, 9, 0), 
	gsSP1Triangle(6, 5, 9, 0), 
	gsSP1Triangle(6, 13, 14, 0), 
	gsSP1Triangle(6, 14, 8, 0), 
	gsSP1Triangle(7, 13, 6, 0), 
	gsSPVertex(nintendo_logo_v + 84, 1, 0),
	gsSPVertex(nintendo_logo_v + 86, 1, 1),
	gsSPVertex(nintendo_logo_v + 101, 1, 2),
	gsSPVertex(nintendo_logo_v + 107, 2, 3),
	gsSPVertex(nintendo_logo_v + 111, 3, 5),
	gsSPVertex(nintendo_logo_v + 534, 1, 8),
	gsSPVertex(nintendo_logo_v + 565, 5, 9),
	gsSPVertex(nintendo_logo_v + 571, 1, 14),
	gsSP1Triangle(7, 9, 4, 0),
	gsSP1Triangle(5, 14, 1, 0),
	gsSP1Triangle(2, 5, 1, 0), 
	gsSP1Triangle(1, 10, 11, 0), 
	gsSP1Triangle(1, 11, 8, 0), 
	gsSP1Triangle(1, 8, 0, 0), 
	gsSP1Triangle(1, 12, 10, 0), 
	gsSP1Triangle(6, 1, 14, 0), 
	gsSP1Triangle(1, 6, 13, 0), 
	gsSP1Triangle(1, 13, 12, 0), 
	gsSP1Triangle(4, 9, 3, 0), 
	gsSPVertex(nintendo_logo_v + 108, 2, 0),
	gsSPVertex(nintendo_logo_v + 113, 5, 2),
	gsSPVertex(nintendo_logo_v + 127, 1, 7),
	gsSPVertex(nintendo_logo_v + 561, 3, 8),
	gsSPVertex(nintendo_logo_v + 577, 3, 11),
	gsSP1Triangle(2, 7, 5, 0),
	gsSP1Triangle(1, 8, 9, 0),
	gsSP1Triangle(1, 9, 4, 0), 
	gsSP1Triangle(2, 0, 10, 0), 
	gsSP1Triangle(3, 2, 10, 0), 
	gsSP1Triangle(3, 10, 12, 0), 
	gsSP1Triangle(1, 4, 10, 0), 
	gsSP1Triangle(1, 10, 0, 0), 
	gsSP1Triangle(4, 12, 10, 0), 
	gsSP1Triangle(5, 4, 9, 0), 
	gsSP1Triangle(4, 7, 13, 0), 
	gsSP1Triangle(4, 5, 7, 0), 
	gsSP1Triangle(6, 9, 8, 0), 
	gsSP1Triangle(6, 11, 9, 0), 
	gsSP1Triangle(5, 9, 11, 0), 
	gsSP1Triangle(7, 3, 12, 0), 
	gsSP1Triangle(7, 12, 13, 0), 
	gsSPVertex(nintendo_logo_v + 109, 1, 0),
	gsSPVertex(nintendo_logo_v + 112, 1, 1),
	gsSPVertex(nintendo_logo_v + 117, 3, 2),
	gsSPVertex(nintendo_logo_v + 472, 1, 5),
	gsSPVertex(nintendo_logo_v + 559, 3, 6),
	gsSPVertex(nintendo_logo_v + 569, 6, 9),
	gsSP1Triangle(0, 1, 7, 0),
	gsSP1Triangle(0, 7, 8, 0), 
	gsSP1Triangle(3, 2, 8, 0), 
	gsSP1Triangle(3, 8, 7, 0), 
	gsSP1Triangle(4, 3, 7, 0), 
	gsSP1Triangle(4, 7, 10, 0), 
	gsSP1Triangle(1, 10, 7, 0), 
	gsSP1Triangle(1, 5, 9, 0), 
	gsSP1Triangle(1, 6, 5, 0), 
	gsSP1Triangle(1, 11, 12, 0), 
	gsSP1Triangle(1, 12, 13, 0), 
	gsSP1Triangle(1, 13, 14, 0), 
	gsSPVertex(nintendo_logo_v + 82, 1, 0),
	gsSPVertex(nintendo_logo_v + 84, 1, 1),
	gsSPVertex(nintendo_logo_v + 99, 2, 2),
	gsSPVertex(nintendo_logo_v + 109, 2, 4),
	gsSPVertex(nintendo_logo_v + 120, 3, 6),
	gsSPVertex(nintendo_logo_v + 542, 1, 9),
	gsSPVertex(nintendo_logo_v + 549, 3, 10),
	gsSPVertex(nintendo_logo_v + 564, 1, 13),
	gsSP1Triangle(5, 8, 2, 0),
	gsSP1Triangle(5, 4, 12, 0),
	gsSP1Triangle(6, 5, 12, 0), 
	gsSP1Triangle(6, 12, 7, 0), 
	gsSP1Triangle(7, 11, 13, 0), 
	gsSP1Triangle(7, 13, 6, 0), 
	gsSP1Triangle(8, 13, 11, 0), 
	gsSP1Triangle(8, 11, 10, 0), 
	gsSP1Triangle(2, 8, 10, 0), 
	gsSP1Triangle(3, 9, 0, 0), 
	gsSP1Triangle(1, 0, 9, 0), 
	gsSP1Triangle(5, 6, 13, 0), 
	gsSP1Triangle(5, 13, 8, 0), 
	gsSPVertex(nintendo_logo_v + 83, 1, 1),
	gsSPVertex(nintendo_logo_v + 100, 1, 2),
	gsSPVertex(nintendo_logo_v + 123, 3, 3),
	gsSPVertex(nintendo_logo_v + 474, 1, 6),
	gsSPVertex(nintendo_logo_v + 534, 1, 7),
	gsSPVertex(nintendo_logo_v + 543, 1, 8),
	gsSPVertex(nintendo_logo_v + 566, 4, 9),
	gsSP1Triangle(0, 6, 8, 0),
	gsSP1Triangle(2, 0, 8, 0), 
	gsSP1Triangle(3, 1, 7, 0), 
	gsSP1Triangle(3, 7, 10, 0), 
	gsSP1Triangle(4, 3, 10, 0), 
	gsSP1Triangle(4, 10, 9, 0), 
	gsSP1Triangle(5, 4, 9, 0), 
	gsSP1Triangle(5, 9, 11, 0), 
	gsSP1Triangle(5, 11, 12, 0), 
	gsSP1Triangle(6, 1, 3, 0), 
	gsSP1Triangle(6, 3, 4, 0), 
	gsSP1Triangle(6, 4, 5, 0), 
	gsSPVertex(nintendo_logo_v + 88, 1, 0),
	gsSPVertex(nintendo_logo_v + 91, 1, 1),
	gsSPVertex(nintendo_logo_v + 112, 1, 2),
	gsSPVertex(nintendo_logo_v + 119, 1, 3),
	gsSPVertex(nintendo_logo_v + 125, 2, 4),
	gsSPVertex(nintendo_logo_v + 128, 1, 6),
	gsSPVertex(nintendo_logo_v + 472, 1, 7),
	gsSPVertex(nintendo_logo_v + 545, 2, 8),
	gsSPVertex(nintendo_logo_v + 569, 2, 10),
	gsSPVertex(nintendo_logo_v + 576, 1, 12),
	gsSP1Triangle(2, 12, 11, 0),
	gsSP1Triangle(4, 10, 7, 0),
	gsSP1Triangle(5, 0, 8, 0), 
	gsSP1Triangle(5, 8, 9, 0), 
	gsSP1Triangle(1, 5, 9, 0), 
	gsSP1Triangle(6, 3, 11, 0), 
	gsSP1Triangle(6, 11, 12, 0), 
	gsSPVertex(nintendo_logo_v + 112, 1, 0),
	gsSPVertex(nintendo_logo_v + 128, 6, 1),
	gsSPVertex(nintendo_logo_v + 571, 6, 7),
	gsSP1Triangle(2, 1, 12, 0),
	gsSP1Triangle(2, 12, 11, 0), 
	gsSP1Triangle(0, 11, 12, 0), 
	gsSP1Triangle(3, 2, 11, 0), 
	gsSP1Triangle(3, 11, 10, 0), 
	gsSP1Triangle(0, 10, 11, 0), 
	gsSP1Triangle(4, 3, 10, 0), 
	gsSP1Triangle(4, 10, 9, 0), 
	gsSP1Triangle(5, 4, 9, 0), 
	gsSP1Triangle(5, 9, 8, 0), 
	gsSP1Triangle(6, 5, 8, 0), 
	gsSP1Triangle(6, 8, 7, 0), 
	gsSPVertex(nintendo_logo_v + 111, 1, 0),
	gsSPVertex(nintendo_logo_v + 133, 7, 1),
	gsSPVertex(nintendo_logo_v + 452, 1, 8),
	gsSPVertex(nintendo_logo_v + 571, 1, 9),
	gsSPVertex(nintendo_logo_v + 580, 4, 10),
	gsSP1Triangle(0, 1, 9, 0),
	gsSP1Triangle(2, 5, 10, 0), 
	gsSP1Triangle(3, 5, 2, 0), 
	gsSP1Triangle(4, 10, 5, 0), 
	gsSP1Triangle(5, 3, 6, 0), 
	gsSP1Triangle(5, 6, 11, 0), 
	gsSP1Triangle(5, 11, 4, 0), 
	gsSP1Triangle(4, 11, 12, 0), 
	gsSP1Triangle(6, 12, 11, 0), 
	gsSP1Triangle(4, 12, 13, 0), 
	gsSP1Triangle(4, 8, 7, 0), 
	gsSP1Triangle(4, 13, 8, 0), 
	gsSP1Triangle(4, 7, 10, 0), 
	gsSP1Triangle(8, 13, 12, 0), 
	gsSPVertex(nintendo_logo_v + 134, 2, 0),
	gsSPVertex(nintendo_logo_v + 138, 5, 2),
	gsSPVertex(nintendo_logo_v + 448, 1, 7),
	gsSPVertex(nintendo_logo_v + 452, 1, 8),
	gsSPVertex(nintendo_logo_v + 580, 1, 9),
	gsSPVertex(nintendo_logo_v + 582, 1, 10),
	gsSPVertex(nintendo_logo_v + 584, 4, 11),
	gsSP1Triangle(1, 11, 2, 0),
	gsSP1Triangle(2, 11, 10, 0), 
	gsSP1Triangle(1, 0, 11, 0), 
	gsSP1Triangle(0, 9, 12, 0), 
	gsSP1Triangle(3, 12, 9, 0), 
	gsSP1Triangle(3, 8, 12, 0), 
	gsSP1Triangle(4, 7, 6, 0), 
	gsSP1Triangle(5, 13, 4, 0), 
	gsSP1Triangle(4, 13, 7, 0), 
	gsSP1Triangle(4, 14, 5, 0), 
	gsSP1Triangle(4, 6, 14, 0), 
	gsSP1Triangle(8, 10, 11, 0), 
	gsSP1Triangle(8, 11, 0, 0), 
	gsSP1Triangle(8, 0, 12, 0), 
	gsSPVertex(nintendo_logo_v + 141, 7, 0),
	gsSPVertex(nintendo_logo_v + 151, 1, 7),
	gsSPVertex(nintendo_logo_v + 156, 1, 8),
	gsSPVertex(nintendo_logo_v + 448, 1, 9),
	gsSPVertex(nintendo_logo_v + 450, 1, 10),
	gsSPVertex(nintendo_logo_v + 586, 4, 11),
	gsSP1Triangle(1, 13, 12, 0),
	gsSP1Triangle(2, 12, 13, 0), 
	gsSP1Triangle(2, 0, 12, 0), 
	gsSP1Triangle(0, 2, 11, 0), 
	gsSP1Triangle(1, 9, 13, 0), 
	gsSP1Triangle(3, 10, 4, 0), 
	gsSP1Triangle(4, 10, 14, 0), 
	gsSP1Triangle(4, 14, 8, 0), 
	gsSP1Triangle(5, 6, 4, 0), 
	gsSP1Triangle(4, 8, 7, 0), 
	gsSP1Triangle(9, 11, 2, 0), 
	gsSP1Triangle(9, 2, 13, 0), 
	gsSPVertex(nintendo_logo_v + 145, 9, 0),
	gsSPVertex(nintendo_logo_v + 160, 2, 9),
	gsSPVertex(nintendo_logo_v + 451, 1, 11),
	gsSPVertex(nintendo_logo_v + 596, 3, 12),
	gsSP1Triangle(3, 11, 5, 0),
	gsSP1Triangle(4, 5, 11, 0), 
	gsSP1Triangle(0, 6, 5, 0), 
	gsSP1Triangle(0, 5, 1, 0), 
	gsSP1Triangle(5, 8, 1, 0), 
	gsSP1Triangle(5, 4, 10, 0), 
	gsSP1Triangle(5, 10, 9, 0), 
	gsSP1Triangle(5, 9, 12, 0), 
	gsSP1Triangle(5, 12, 13, 0), 
	gsSP1Triangle(5, 13, 8, 0), 
	gsSP1Triangle(6, 3, 5, 0), 
	gsSP1Triangle(7, 2, 1, 0), 
	gsSP1Triangle(7, 1, 14, 0), 
	gsSP1Triangle(8, 14, 1, 0), 
	gsSPVertex(nintendo_logo_v + 148, 1, 0),
	gsSPVertex(nintendo_logo_v + 151, 1, 1),
	gsSPVertex(nintendo_logo_v + 154, 4, 2),
	gsSPVertex(nintendo_logo_v + 162, 1, 6),
	gsSPVertex(nintendo_logo_v + 164, 2, 7),
	gsSPVertex(nintendo_logo_v + 167, 1, 9),
	gsSPVertex(nintendo_logo_v + 589, 3, 10),
	gsSPVertex(nintendo_logo_v + 607, 1, 13),
	gsSP1Triangle(2, 13, 1, 0),
	gsSP1Triangle(3, 1, 13, 0), 
	gsSP1Triangle(4, 2, 1, 0), 
	gsSP1Triangle(1, 3, 7, 0), 
	gsSP1Triangle(1, 7, 11, 0), 
	gsSP1Triangle(1, 11, 6, 0), 
	gsSP1Triangle(1, 6, 0, 0), 
	gsSP1Triangle(5, 4, 10, 0), 
	gsSP1Triangle(4, 5, 9, 0), 
	gsSP1Triangle(4, 9, 8, 0), 
	gsSP1Triangle(4, 8, 12, 0), 
	gsSP1Triangle(4, 12, 2, 0), 
	gsSPVertex(nintendo_logo_v + 145, 1, 0),
	gsSPVertex(nintendo_logo_v + 147, 1, 1),
	gsSPVertex(nintendo_logo_v + 152, 2, 2),
	gsSPVertex(nintendo_logo_v + 158, 2, 4),
	gsSPVertex(nintendo_logo_v + 168, 1, 6),
	gsSPVertex(nintendo_logo_v + 449, 1, 7),
	gsSPVertex(nintendo_logo_v + 592, 2, 8),
	gsSPVertex(nintendo_logo_v + 596, 4, 10),
	gsSP1Triangle(4, 12, 13, 0),
	gsSP1Triangle(4, 8, 1, 0),
	gsSP1Triangle(4, 1, 2, 0), 
	gsSP1Triangle(1, 8, 9, 0), 
	gsSP1Triangle(1, 9, 6, 0), 
	gsSP1Triangle(1, 6, 0, 0), 
	gsSP1Triangle(3, 11, 7, 0), 
	gsSP1Triangle(3, 7, 13, 0), 
	gsSP1Triangle(3, 13, 12, 0), 
	gsSP1Triangle(5, 7, 11, 0), 
	gsSP1Triangle(5, 11, 10, 0), 
	gsSP1Triangle(4, 13, 7, 0), 
	gsSP1Triangle(4, 2, 12, 0), 
	gsSPVertex(nintendo_logo_v + 148, 2, 0),
	gsSPVertex(nintendo_logo_v + 159, 4, 2),
	gsSPVertex(nintendo_logo_v + 451, 1, 6),
	gsSPVertex(nintendo_logo_v + 596, 1, 7),
	gsSPVertex(nintendo_logo_v + 600, 5, 8),
	gsSP1Triangle(6, 11, 12, 0),
	gsSP1Triangle(3, 2, 7, 0),
	gsSP1Triangle(3, 8, 2, 0), 
	gsSP1Triangle(3, 4, 9, 0), 
	gsSP1Triangle(3, 9, 8, 0), 
	gsSP1Triangle(4, 1, 10, 0), 
	gsSP1Triangle(4, 10, 9, 0), 
	gsSP1Triangle(1, 6, 10, 0), 
	gsSP1Triangle(0, 11, 6, 0), 
	gsSP1Triangle(0, 12, 11, 0), 
	gsSP1Triangle(0, 5, 12, 0), 
	gsSPVertex(nintendo_logo_v + 154, 2, 0),
	gsSPVertex(nintendo_logo_v + 162, 3, 2),
	gsSPVertex(nintendo_logo_v + 590, 2, 5),
	gsSPVertex(nintendo_logo_v + 604, 6, 7),
	gsSP1Triangle(2, 5, 3, 0),
	gsSP1Triangle(2, 3, 7, 0), 
	gsSP1Triangle(3, 5, 4, 0), 
	gsSP1Triangle(4, 1, 9, 0), 
	gsSP1Triangle(3, 4, 8, 0), 
	gsSP1Triangle(4, 9, 8, 0), 
	gsSP1Triangle(1, 10, 9, 0), 
	gsSP1Triangle(0, 11, 10, 0), 
	gsSP1Triangle(0, 6, 12, 0), 
	gsSP1Triangle(0, 12, 11, 0), 
	gsSPVertex(nintendo_logo_v + 144, 1, 0),
	gsSPVertex(nintendo_logo_v + 157, 1, 1),
	gsSPVertex(nintendo_logo_v + 165, 5, 2),
	gsSPVertex(nintendo_logo_v + 589, 1, 7),
	gsSPVertex(nintendo_logo_v + 591, 1, 8),
	gsSPVertex(nintendo_logo_v + 593, 2, 9),
	gsSPVertex(nintendo_logo_v + 609, 3, 11),
	gsSP1Triangle(2, 11, 8, 0),
	gsSP1Triangle(3, 2, 4, 0), 
	gsSP1Triangle(2, 3, 11, 0), 
	gsSP1Triangle(3, 4, 12, 0), 
	gsSP1Triangle(4, 13, 12, 0), 
	gsSP1Triangle(4, 1, 13, 0), 
	gsSP1Triangle(1, 7, 13, 0), 
	gsSP1Triangle(5, 9, 6, 0), 
	gsSP1Triangle(5, 6, 10, 0), 
	gsSP1Triangle(0, 5, 10, 0), 
	gsSPVertex(nintendo_logo_v + 158, 1, 0),
	gsSPVertex(nintendo_logo_v + 169, 5, 1),
	gsSPVertex(nintendo_logo_v + 179, 1, 6),
	gsSPVertex(nintendo_logo_v + 197, 1, 7),
	gsSPVertex(nintendo_logo_v + 592, 2, 8),
	gsSPVertex(nintendo_logo_v + 612, 5, 10),
	gsSP1Triangle(1, 9, 8, 0),
	gsSP1Triangle(1, 8, 0, 0), 
	gsSP1Triangle(2, 10, 3, 0), 
	gsSP1Triangle(3, 10, 11, 0), 
	gsSP1Triangle(3, 11, 12, 0), 
	gsSP1Triangle(3, 7, 13, 0), 
	gsSP1Triangle(3, 13, 14, 0), 
	gsSP1Triangle(3, 14, 6, 0), 
	gsSP1Triangle(3, 12, 7, 0), 
	gsSP1Triangle(4, 2, 3, 0), 
	gsSP1Triangle(5, 4, 3, 0), 
	gsSP1Triangle(7, 12, 11, 0), 
	gsSPVertex(nintendo_logo_v + 171, 1, 0),
	gsSPVertex(nintendo_logo_v + 173, 7, 1),
	gsSPVertex(nintendo_logo_v + 181, 1, 8),
	gsSPVertex(nintendo_logo_v + 617, 1, 9),
	gsSPVertex(nintendo_logo_v + 626, 5, 10),
	gsSP1Triangle(3, 4, 10, 0),
	gsSP1Triangle(3, 10, 11, 0), 
	gsSP1Triangle(2, 3, 11, 0), 
	gsSP1Triangle(0, 3, 2, 0), 
	gsSP1Triangle(0, 4, 3, 0), 
	gsSP1Triangle(1, 2, 9, 0), 
	gsSP1Triangle(2, 11, 9, 0), 
	gsSP1Triangle(2, 1, 0, 0), 
	gsSP1Triangle(4, 5, 12, 0), 
	gsSP1Triangle(4, 12, 10, 0), 
	gsSP1Triangle(0, 5, 4, 0), 
	gsSP1Triangle(5, 6, 13, 0), 
	gsSP1Triangle(5, 13, 12, 0), 
	gsSP1Triangle(0, 6, 5, 0), 
	gsSP1Triangle(6, 8, 14, 0), 
	gsSP1Triangle(6, 14, 13, 0), 
	gsSP1Triangle(7, 8, 6, 0), 
	gsSP1Triangle(0, 7, 6, 0), 
	gsSPVertex(nintendo_logo_v + 172, 2, 0),
	gsSPVertex(nintendo_logo_v + 179, 7, 2),
	gsSPVertex(nintendo_logo_v + 187, 1, 9),
	gsSPVertex(nintendo_logo_v + 196, 1, 10),
	gsSPVertex(nintendo_logo_v + 453, 1, 11),
	gsSPVertex(nintendo_logo_v + 616, 3, 12),
	gsSP1Triangle(0, 1, 14, 0),
	gsSP1Triangle(2, 10, 11, 0),
	gsSP1Triangle(2, 12, 10, 0), 
	gsSP1Triangle(3, 9, 2, 0), 
	gsSP1Triangle(3, 2, 11, 0), 
	gsSP1Triangle(2, 9, 8, 0), 
	gsSP1Triangle(2, 8, 7, 0), 
	gsSP1Triangle(2, 7, 6, 0), 
	gsSP1Triangle(2, 6, 5, 0), 
	gsSP1Triangle(2, 5, 4, 0), 
	gsSP1Triangle(1, 13, 14, 0), 
	gsSPVertex(nintendo_logo_v + 181, 6, 0),
	gsSPVertex(nintendo_logo_v + 189, 1, 6),
	gsSPVertex(nintendo_logo_v + 630, 8, 7),
	gsSP1Triangle(0, 8, 7, 0),
	gsSP1Triangle(0, 1, 8, 0), 
	gsSP1Triangle(1, 9, 8, 0), 
	gsSP1Triangle(1, 2, 9, 0), 
	gsSP1Triangle(2, 3, 10, 0), 
	gsSP1Triangle(2, 10, 9, 0), 
	gsSP1Triangle(3, 6, 11, 0), 
	gsSP1Triangle(3, 11, 10, 0), 
	gsSP1Triangle(4, 6, 3, 0), 
	gsSP1Triangle(5, 4, 13, 0), 
	gsSP1Triangle(4, 5, 12, 0), 
	gsSP1Triangle(4, 12, 14, 0), 
	gsSPVertex(nintendo_logo_v + 172, 1, 0),
	gsSPVertex(nintendo_logo_v + 180, 1, 1),
	gsSPVertex(nintendo_logo_v + 185, 1, 2),
	gsSPVertex(nintendo_logo_v + 187, 2, 3),
	gsSPVertex(nintendo_logo_v + 194, 2, 5),
	gsSPVertex(nintendo_logo_v + 618, 3, 7),
	gsSPVertex(nintendo_logo_v + 636, 1, 10),
	gsSPVertex(nintendo_logo_v + 639, 4, 11),
	gsSP1Triangle(6, 12, 11, 0),
	gsSP1Triangle(3, 10, 2, 0),
	gsSP1Triangle(3, 1, 6, 0), 
	gsSP1Triangle(3, 6, 11, 0), 
	gsSP1Triangle(3, 11, 12, 0), 
	gsSP1Triangle(3, 12, 5, 0), 
	gsSP1Triangle(3, 5, 13, 0), 
	gsSP1Triangle(3, 13, 10, 0), 
	gsSP1Triangle(4, 0, 14, 0), 
	gsSP1Triangle(0, 7, 14, 0), 
	gsSP1Triangle(0, 8, 9, 0), 
	gsSPVertex(nintendo_logo_v + 185, 2, 0),
	gsSPVertex(nintendo_logo_v + 189, 4, 2),
	gsSPVertex(nintendo_logo_v + 455, 1, 6),
	gsSPVertex(nintendo_logo_v + 634, 5, 7),
	gsSPVertex(nintendo_logo_v + 643, 2, 12),
	gsSP1Triangle(5, 1, 13, 0),
	gsSP1Triangle(2, 3, 12, 0),
	gsSP1Triangle(2, 12, 7, 0), 
	gsSP1Triangle(0, 3, 2, 0), 
	gsSP1Triangle(3, 4, 6, 0), 
	gsSP1Triangle(3, 6, 12, 0), 
	gsSP1Triangle(0, 4, 3, 0), 
	gsSP1Triangle(4, 11, 5, 0), 
	gsSP1Triangle(4, 5, 6, 0), 
	gsSP1Triangle(0, 11, 4, 0), 
	gsSP1Triangle(5, 11, 10, 0), 
	gsSP1Triangle(0, 10, 11, 0), 
	gsSP1Triangle(5, 10, 8, 0), 
	gsSP1Triangle(1, 9, 13, 0), 
	gsSP1Triangle(5, 8, 1, 0), 
	gsSPVertex(nintendo_logo_v + 193, 5, 0),
	gsSPVertex(nintendo_logo_v + 454, 1, 5),
	gsSPVertex(nintendo_logo_v + 613, 1, 6),
	gsSPVertex(nintendo_logo_v + 615, 2, 7),
	gsSPVertex(nintendo_logo_v + 623, 2, 9),
	gsSPVertex(nintendo_logo_v + 640, 2, 11),
	gsSPVertex(nintendo_logo_v + 646, 1, 13),
	gsSP1Triangle(0, 12, 1, 0),
	gsSP1Triangle(0, 1, 13, 0), 
	gsSP1Triangle(1, 11, 5, 0), 
	gsSP1Triangle(1, 5, 13, 0), 
	gsSP1Triangle(2, 5, 11, 0), 
	gsSP1Triangle(3, 8, 7, 0), 
	gsSP1Triangle(4, 9, 7, 0), 
	gsSP1Triangle(3, 7, 9, 0), 
	gsSP1Triangle(4, 6, 10, 0), 
	gsSP1Triangle(4, 10, 9, 0), 
	gsSPVertex(nintendo_logo_v + 170, 1, 0),
	gsSPVertex(nintendo_logo_v + 172, 1, 1),
	gsSPVertex(nintendo_logo_v + 198, 5, 2),
	gsSPVertex(nintendo_logo_v + 456, 1, 7),
	gsSPVertex(nintendo_logo_v + 612, 1, 8),
	gsSPVertex(nintendo_logo_v + 619, 4, 9),
	gsSPVertex(nintendo_logo_v + 625, 1, 13),
	gsSP1Triangle(1, 10, 11, 0),
	gsSP1Triangle(1, 11, 12, 0), 
	gsSP1Triangle(1, 12, 0, 0), 
	gsSP1Triangle(0, 12, 7, 0), 
	gsSP1Triangle(0, 7, 13, 0), 
	gsSP1Triangle(0, 13, 8, 0), 
	gsSP1Triangle(2, 12, 11, 0), 
	gsSP1Triangle(2, 7, 12, 0), 
	gsSP1Triangle(3, 2, 11, 0), 
	gsSP1Triangle(3, 11, 10, 0), 
	gsSP1Triangle(4, 3, 10, 0), 
	gsSP1Triangle(4, 10, 9, 0), 
	gsSP1Triangle(5, 4, 9, 0), 
	gsSP1Triangle(5, 9, 6, 0), 
	gsSP1Triangle(1, 6, 9, 0), 
	gsSP1Triangle(7, 2, 3, 0), 
	gsSP1Triangle(7, 3, 4, 0), 
	gsSP1Triangle(7, 4, 5, 0), 
	gsSPVertex(nintendo_logo_v + 172, 1, 0),
	gsSPVertex(nintendo_logo_v + 188, 1, 1),
	gsSPVertex(nintendo_logo_v + 201, 4, 2),
	gsSPVertex(nintendo_logo_v + 208, 1, 6),
	gsSPVertex(nintendo_logo_v + 212, 1, 7),
	gsSPVertex(nintendo_logo_v + 642, 1, 8),
	gsSPVertex(nintendo_logo_v + 645, 1, 9),
	gsSPVertex(nintendo_logo_v + 647, 5, 10),
	gsSP1Triangle(3, 9, 2, 0),
	gsSP1Triangle(3, 1, 9, 0), 
	gsSP1Triangle(0, 1, 3, 0), 
	gsSP1Triangle(1, 8, 9, 0), 
	gsSP1Triangle(4, 10, 11, 0), 
	gsSP1Triangle(4, 11, 12, 0), 
	gsSP1Triangle(5, 10, 4, 0), 
	gsSP1Triangle(4, 7, 13, 0), 
	gsSP1Triangle(4, 13, 14, 0), 
	gsSP1Triangle(4, 14, 6, 0), 
	gsSPVertex(nintendo_logo_v + 203, 9, 0),
	gsSPVertex(nintendo_logo_v + 217, 1, 9),
	gsSPVertex(nintendo_logo_v + 219, 1, 10),
	gsSPVertex(nintendo_logo_v + 447, 1, 11),
	gsSPVertex(nintendo_logo_v + 650, 2, 12),
	gsSPVertex(nintendo_logo_v + 654, 1, 14),
	gsSP1Triangle(0, 5, 2, 0),
	gsSP1Triangle(3, 5, 13, 0), 
	gsSP1Triangle(4, 14, 5, 0), 
	gsSP1Triangle(4, 5, 3, 0), 
	gsSP1Triangle(5, 14, 10, 0), 
	gsSP1Triangle(5, 10, 2, 0), 
	gsSP1Triangle(6, 2, 10, 0), 
	gsSP1Triangle(7, 2, 6, 0), 
	gsSP1Triangle(2, 7, 9, 0), 
	gsSP1Triangle(2, 9, 1, 0), 
	gsSP1Triangle(2, 1, 0, 0), 
	gsSP1Triangle(3, 13, 11, 0), 
	gsSP1Triangle(8, 11, 13, 0), 
	gsSP1Triangle(8, 13, 12, 0), 
	gsSP1Triangle(10, 14, 4, 0), 
	gsSP1Triangle(6, 4, 3, 0), 
	gsSPVertex(nintendo_logo_v + 211, 6, 1),
	gsSPVertex(nintendo_logo_v + 446, 1, 7),
	gsSPVertex(nintendo_logo_v + 650, 1, 8),
	gsSPVertex(nintendo_logo_v + 652, 2, 9),
	gsSPVertex(nintendo_logo_v + 657, 2, 11),
	gsSP1Triangle(1, 8, 2, 0),
	gsSP1Triangle(1, 2, 11, 0), 
	gsSP1Triangle(2, 3, 11, 0), 
	gsSP1Triangle(3, 2, 9, 0), 
	gsSP1Triangle(0, 9, 2, 0), 
	gsSP1Triangle(4, 7, 9, 0), 
	gsSP1Triangle(4, 9, 10, 0), 
	gsSP1Triangle(3, 9, 7, 0), 
	gsSP1Triangle(0, 10, 9, 0), 
	gsSP1Triangle(5, 4, 10, 0), 
	gsSP1Triangle(0, 5, 10, 0), 
	gsSP1Triangle(5, 12, 4, 0), 
	gsSP1Triangle(0, 6, 5, 0), 
	gsSP1Triangle(7, 4, 12, 0), 
	gsSPVertex(nintendo_logo_v + 204, 1, 1),
	gsSPVertex(nintendo_logo_v + 209, 2, 2),
	gsSPVertex(nintendo_logo_v + 216, 3, 4),
	gsSPVertex(nintendo_logo_v + 445, 1, 7),
	gsSPVertex(nintendo_logo_v + 647, 3, 8),
	gsSPVertex(nintendo_logo_v + 655, 1, 11),
	gsSPVertex(nintendo_logo_v + 659, 1, 12),
	gsSP1Triangle(7, 11, 2, 0),
	gsSP1Triangle(4, 10, 9, 0),
	gsSP1Triangle(4, 9, 12, 0), 
	gsSP1Triangle(0, 10, 4, 0), 
	gsSP1Triangle(5, 7, 1, 0), 
	gsSP1Triangle(1, 7, 8, 0), 
	gsSP1Triangle(6, 5, 3, 0), 
	gsSP1Triangle(5, 6, 7, 0), 
	gsSP1Triangle(6, 3, 11, 0), 
	gsSP1Triangle(3, 2, 11, 0), 
	gsSP1Triangle(7, 6, 11, 0), 
	gsSPVertex(nintendo_logo_v + 207, 1, 0),
	gsSPVertex(nintendo_logo_v + 209, 1, 1),
	gsSPVertex(nintendo_logo_v + 219, 7, 2),
	gsSPVertex(nintendo_logo_v + 656, 1, 9),
	gsSPVertex(nintendo_logo_v + 660, 3, 10),
	gsSP1Triangle(2, 0, 9, 0),
	gsSP1Triangle(1, 2, 9, 0), 
	gsSP1Triangle(3, 6, 10, 0), 
	gsSP1Triangle(4, 10, 6, 0), 
	gsSP1Triangle(5, 4, 6, 0), 
	gsSP1Triangle(6, 3, 11, 0), 
	gsSP1Triangle(6, 11, 5, 0), 
	gsSP1Triangle(7, 8, 11, 0), 
	gsSP1Triangle(7, 11, 12, 0), 
	gsSP1Triangle(8, 5, 11, 0), 
	gsSP1Triangle(3, 12, 11, 0), 
	gsSP1Triangle(1, 9, 0, 0), 
	gsSPVertex(nintendo_logo_v + 220, 3, 0),
	gsSPVertex(nintendo_logo_v + 225, 3, 3),
	gsSPVertex(nintendo_logo_v + 660, 1, 6),
	gsSPVertex(nintendo_logo_v + 663, 8, 7),
	gsSP1Triangle(4, 7, 2, 0),
	gsSP1Triangle(3, 4, 2, 0), 
	gsSP1Triangle(2, 7, 1, 0), 
	gsSP1Triangle(5, 0, 8, 0), 
	gsSP1Triangle(0, 6, 8, 0), 
	gsSP1Triangle(5, 9, 0, 0), 
	gsSP1Triangle(0, 9, 10, 0), 
	gsSP1Triangle(0, 10, 11, 0), 
	gsSP1Triangle(0, 11, 12, 0), 
	gsSP1Triangle(0, 12, 13, 0), 
	gsSP1Triangle(0, 13, 14, 0), 
	gsSP1Triangle(5, 8, 6, 0), 
	gsSPVertex(nintendo_logo_v + 221, 1, 0),
	gsSPVertex(nintendo_logo_v + 224, 1, 1),
	gsSPVertex(nintendo_logo_v + 226, 1, 2),
	gsSPVertex(nintendo_logo_v + 228, 3, 3),
	gsSPVertex(nintendo_logo_v + 254, 1, 6),
	gsSPVertex(nintendo_logo_v + 660, 1, 7),
	gsSPVertex(nintendo_logo_v + 662, 2, 8),
	gsSPVertex(nintendo_logo_v + 671, 3, 10),
	gsSPVertex(nintendo_logo_v + 675, 2, 13),
	gsSP1Triangle(0, 11, 12, 0),
	gsSP1Triangle(0, 6, 11, 0), 
	gsSP1Triangle(0, 12, 7, 0), 
	gsSP1Triangle(3, 6, 0, 0), 
	gsSP1Triangle(3, 0, 13, 0), 
	gsSP1Triangle(4, 14, 9, 0), 
	gsSP1Triangle(2, 4, 9, 0), 
	gsSP1Triangle(3, 13, 9, 0), 
	gsSP1Triangle(3, 9, 14, 0), 
	gsSP1Triangle(5, 1, 8, 0), 
	gsSP1Triangle(5, 8, 10, 0), 
	gsSP1Triangle(1, 5, 11, 0), 
	gsSPVertex(nintendo_logo_v + 220, 1, 0),
	gsSPVertex(nintendo_logo_v + 230, 6, 1),
	gsSPVertex(nintendo_logo_v + 662, 1, 7),
	gsSPVertex(nintendo_logo_v + 666, 6, 8),
	gsSP1Triangle(2, 1, 13, 0),
	gsSP1Triangle(2, 13, 12, 0), 
	gsSP1Triangle(0, 12, 13, 0), 
	gsSP1Triangle(0, 13, 7, 0), 
	gsSP1Triangle(3, 2, 12, 0), 
	gsSP1Triangle(3, 12, 11, 0), 
	gsSP1Triangle(4, 11, 10, 0), 
	gsSP1Triangle(4, 3, 11, 0), 
	gsSP1Triangle(5, 4, 10, 0), 
	gsSP1Triangle(5, 10, 9, 0), 
	gsSP1Triangle(6, 5, 9, 0), 
	gsSP1Triangle(6, 9, 8, 0), 
	gsSPVertex(nintendo_logo_v + 227, 1, 0),
	gsSPVertex(nintendo_logo_v + 235, 8, 1),
	gsSPVertex(nintendo_logo_v + 457, 2, 9),
	gsSPVertex(nintendo_logo_v + 665, 2, 11),
	gsSPVertex(nintendo_logo_v + 677, 1, 13),
	gsSPVertex(nintendo_logo_v + 681, 1, 14),
	gsSP1Triangle(1, 12, 11, 0),
	gsSP1Triangle(1, 11, 0, 0), 
	gsSP1Triangle(2, 5, 10, 0), 
	gsSP1Triangle(3, 10, 5, 0), 
	gsSP1Triangle(3, 5, 14, 0), 
	gsSP1Triangle(2, 8, 5, 0), 
	gsSP1Triangle(4, 14, 5, 0), 
	gsSP1Triangle(5, 8, 7, 0), 
	gsSP1Triangle(5, 7, 4, 0), 
	gsSP1Triangle(6, 9, 7, 0), 
	gsSP1Triangle(6, 7, 13, 0), 
	gsSP1Triangle(9, 2, 10, 0), 
	gsSPVertex(nintendo_logo_v + 228, 1, 0),
	gsSPVertex(nintendo_logo_v + 236, 1, 1),
	gsSPVertex(nintendo_logo_v + 238, 1, 2),
	gsSPVertex(nintendo_logo_v + 241, 4, 3),
	gsSPVertex(nintendo_logo_v + 250, 2, 7),
	gsSPVertex(nintendo_logo_v + 265, 1, 9),
	gsSPVertex(nintendo_logo_v + 274, 1, 10),
	gsSPVertex(nintendo_logo_v + 681, 1, 11),
	gsSPVertex(nintendo_logo_v + 683, 3, 12),
	gsSP1Triangle(1, 10, 4, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(3, 6, 2, 0), 
	gsSP1Triangle(5, 9, 2, 0), 
	gsSP1Triangle(6, 5, 2, 0), 
	gsSP1Triangle(2, 9, 8, 0), 
	gsSP1Triangle(2, 8, 7, 0), 
	gsSP1Triangle(2, 12, 11, 0), 
	gsSP1Triangle(2, 7, 13, 0), 
	gsSP1Triangle(2, 13, 14, 0), 
	gsSP1Triangle(2, 14, 12, 0), 
	gsSPVertex(nintendo_logo_v + 237, 1, 0),
	gsSPVertex(nintendo_logo_v + 246, 7, 1),
	gsSPVertex(nintendo_logo_v + 681, 1, 8),
	gsSPVertex(nintendo_logo_v + 683, 5, 9),
	gsSPVertex(nintendo_logo_v + 693, 1, 14),
	gsSP1Triangle(1, 0, 8, 0),
	gsSP1Triangle(1, 8, 9, 0), 
	gsSP1Triangle(2, 1, 9, 0), 
	gsSP1Triangle(2, 9, 11, 0), 
	gsSP1Triangle(3, 2, 11, 0), 
	gsSP1Triangle(3, 11, 10, 0), 
	gsSP1Triangle(4, 10, 12, 0), 
	gsSP1Triangle(4, 3, 10, 0), 
	gsSP1Triangle(5, 12, 10, 0), 
	gsSP1Triangle(6, 13, 5, 0), 
	gsSP1Triangle(7, 14, 5, 0), 
	gsSP1Triangle(7, 5, 13, 0), 
	gsSPVertex(nintendo_logo_v + 228, 1, 0),
	gsSPVertex(nintendo_logo_v + 241, 2, 1),
	gsSPVertex(nintendo_logo_v + 249, 1, 3),
	gsSPVertex(nintendo_logo_v + 253, 3, 4),
	gsSPVertex(nintendo_logo_v + 269, 1, 7),
	gsSPVertex(nintendo_logo_v + 674, 1, 8),
	gsSPVertex(nintendo_logo_v + 676, 5, 9),
	gsSPVertex(nintendo_logo_v + 686, 1, 14),
	gsSP1Triangle(4, 8, 0, 0),
	gsSP1Triangle(5, 0, 8, 0), 
	gsSP1Triangle(0, 11, 7, 0), 
	gsSP1Triangle(0, 7, 12, 0), 
	gsSP1Triangle(0, 12, 10, 0), 
	gsSP1Triangle(0, 10, 1, 0), 
	gsSP1Triangle(0, 13, 11, 0), 
	gsSP1Triangle(2, 4, 0, 0), 
	gsSP1Triangle(0, 9, 13, 0), 
	gsSP1Triangle(6, 3, 14, 0), 
	gsSPVertex(nintendo_logo_v + 250, 1, 0),
	gsSPVertex(nintendo_logo_v + 255, 6, 1),
	gsSPVertex(nintendo_logo_v + 686, 1, 7),
	gsSPVertex(nintendo_logo_v + 688, 4, 8),
	gsSPVertex(nintendo_logo_v + 696, 2, 12),
	gsSP1Triangle(6, 9, 8, 0),
	gsSP1Triangle(0, 8, 9, 0),
	gsSP1Triangle(0, 9, 10, 0), 
	gsSP1Triangle(0, 10, 11, 0), 
	gsSP1Triangle(0, 11, 12, 0), 
	gsSP1Triangle(0, 12, 13, 0), 
	gsSP1Triangle(1, 7, 13, 0), 
	gsSP1Triangle(0, 13, 7, 0), 
	gsSP1Triangle(2, 13, 12, 0), 
	gsSP1Triangle(2, 1, 13, 0), 
	gsSP1Triangle(3, 2, 12, 0), 
	gsSP1Triangle(3, 12, 11, 0), 
	gsSP1Triangle(4, 3, 11, 0), 
	gsSP1Triangle(4, 11, 10, 0), 
	gsSP1Triangle(5, 4, 10, 0), 
	gsSP1Triangle(5, 10, 9, 0), 
	gsSP1Triangle(6, 5, 9, 0), 
	gsSPVertex(nintendo_logo_v + 242, 1, 0),
	gsSPVertex(nintendo_logo_v + 245, 1, 1),
	gsSPVertex(nintendo_logo_v + 250, 1, 2),
	gsSPVertex(nintendo_logo_v + 253, 1, 3),
	gsSPVertex(nintendo_logo_v + 260, 3, 4),
	gsSPVertex(nintendo_logo_v + 274, 1, 7),
	gsSPVertex(nintendo_logo_v + 688, 1, 8),
	gsSPVertex(nintendo_logo_v + 692, 1, 9),
	gsSPVertex(nintendo_logo_v + 700, 5, 10),
	gsSP1Triangle(1, 0, 7, 0),
	gsSP1Triangle(0, 1, 3, 0), 
	gsSP1Triangle(2, 1, 8, 0), 
	gsSP1Triangle(2, 9, 1, 0), 
	gsSP1Triangle(5, 4, 8, 0), 
	gsSP1Triangle(5, 8, 10, 0), 
	gsSP1Triangle(1, 10, 8, 0), 
	gsSP1Triangle(1, 11, 12, 0), 
	gsSP1Triangle(1, 9, 11, 0), 
	gsSP1Triangle(6, 3, 1, 0), 
	gsSP1Triangle(6, 1, 12, 0), 
	gsSP1Triangle(1, 7, 13, 0), 
	gsSP1Triangle(1, 13, 14, 0), 
	gsSP1Triangle(1, 14, 10, 0), 
	gsSPVertex(nintendo_logo_v + 250, 3, 0),
	gsSPVertex(nintendo_logo_v + 263, 3, 3),
	gsSPVertex(nintendo_logo_v + 687, 1, 6),
	gsSPVertex(nintendo_logo_v + 692, 4, 7),
	gsSPVertex(nintendo_logo_v + 698, 1, 11),
	gsSPVertex(nintendo_logo_v + 701, 1, 12),
	gsSP1Triangle(3, 12, 7, 0),
	gsSP1Triangle(3, 7, 10, 0), 
	gsSP1Triangle(0, 10, 7, 0), 
	gsSP1Triangle(3, 10, 9, 0), 
	gsSP1Triangle(0, 9, 10, 0), 
	gsSP1Triangle(3, 9, 4, 0), 
	gsSP1Triangle(4, 9, 8, 0), 
	gsSP1Triangle(0, 8, 9, 0), 
	gsSP1Triangle(4, 8, 2, 0), 
	gsSP1Triangle(5, 11, 1, 0), 
	gsSP1Triangle(1, 11, 6, 0), 
	gsSP1Triangle(2, 6, 11, 0), 
	gsSPVertex(nintendo_logo_v + 240, 2, 0),
	gsSPVertex(nintendo_logo_v + 243, 2, 2),
	gsSPVertex(nintendo_logo_v + 265, 3, 4),
	gsSPVertex(nintendo_logo_v + 460, 1, 7),
	gsSPVertex(nintendo_logo_v + 677, 1, 8),
	gsSPVertex(nintendo_logo_v + 679, 1, 9),
	gsSPVertex(nintendo_logo_v + 682, 1, 10),
	gsSPVertex(nintendo_logo_v + 698, 2, 11),
	gsSP1Triangle(7, 2, 12, 0),
	gsSP1Triangle(1, 5, 10, 0),
	gsSP1Triangle(2, 7, 4, 0), 
	gsSP1Triangle(4, 7, 11, 0), 
	gsSP1Triangle(5, 12, 3, 0), 
	gsSP1Triangle(5, 3, 10, 0), 
	gsSP1Triangle(3, 12, 2, 0), 
	gsSP1Triangle(1, 10, 3, 0), 
	gsSP1Triangle(6, 8, 9, 0), 
	gsSP1Triangle(0, 8, 6, 0), 
	gsSP1Triangle(7, 12, 5, 0), 
	gsSPVertex(nintendo_logo_v + 229, 1, 0),
	gsSPVertex(nintendo_logo_v + 254, 1, 1),
	gsSPVertex(nintendo_logo_v + 267, 5, 2),
	gsSPVertex(nintendo_logo_v + 461, 2, 7),
	gsSPVertex(nintendo_logo_v + 672, 1, 9),
	gsSPVertex(nintendo_logo_v + 674, 1, 10),
	gsSPVertex(nintendo_logo_v + 676, 1, 11),
	gsSPVertex(nintendo_logo_v + 678, 3, 12),
	gsSP1Triangle(8, 3, 10, 0),
	gsSP1Triangle(2, 13, 8, 0),
	gsSP1Triangle(3, 8, 13, 0), 
	gsSP1Triangle(3, 13, 4, 0), 
	gsSP1Triangle(4, 7, 3, 0), 
	gsSP1Triangle(4, 12, 7, 0), 
	gsSP1Triangle(5, 7, 12, 0), 
	gsSP1Triangle(5, 12, 14, 0), 
	gsSP1Triangle(6, 5, 14, 0), 
	gsSP1Triangle(6, 14, 11, 0), 
	gsSP1Triangle(0, 6, 11, 0), 
	gsSP1Triangle(1, 10, 9, 0), 
	gsSP1Triangle(2, 8, 10, 0), 
	gsSP1Triangle(5, 6, 10, 0), 
	gsSP1Triangle(7, 5, 10, 0), 
	gsSP1Triangle(6, 0, 10, 0), 
	gsSP1Triangle(3, 7, 10, 0), 
	gsSPVertex(nintendo_logo_v + 236, 1, 0),
	gsSPVertex(nintendo_logo_v + 253, 1, 1),
	gsSPVertex(nintendo_logo_v + 261, 2, 2),
	gsSPVertex(nintendo_logo_v + 272, 5, 4),
	gsSPVertex(nintendo_logo_v + 459, 1, 9),
	gsSPVertex(nintendo_logo_v + 674, 1, 10),
	gsSPVertex(nintendo_logo_v + 700, 1, 11),
	gsSPVertex(nintendo_logo_v + 703, 3, 12),
	gsSP1Triangle(9, 10, 3, 0),
	gsSP1Triangle(1, 3, 10, 0),
	gsSP1Triangle(4, 2, 11, 0), 
	gsSP1Triangle(4, 11, 13, 0), 
	gsSP1Triangle(5, 13, 12, 0), 
	gsSP1Triangle(5, 4, 13, 0), 
	gsSP1Triangle(6, 5, 12, 0), 
	gsSP1Triangle(0, 9, 6, 0), 
	gsSP1Triangle(6, 9, 5, 0), 
	gsSP1Triangle(7, 14, 8, 0), 
	gsSP1Triangle(9, 0, 10, 0), 
	gsSPVertex(nintendo_logo_v + 276, 1, 0),
	gsSPVertex(nintendo_logo_v + 278, 7, 1),
	gsSPVertex(nintendo_logo_v + 710, 5, 8),
	gsSP1Triangle(6, 12, 11, 0),
	gsSP1Triangle(0, 3, 2, 0),
	gsSP1Triangle(2, 1, 0, 0), 
	gsSP1Triangle(0, 7, 6, 0), 
	gsSP1Triangle(0, 6, 5, 0), 
	gsSP1Triangle(2, 3, 8, 0), 
	gsSP1Triangle(3, 9, 8, 0), 
	gsSP1Triangle(3, 5, 9, 0), 
	gsSP1Triangle(0, 5, 3, 0), 
	gsSP1Triangle(4, 2, 10, 0), 
	gsSP1Triangle(4, 1, 2, 0), 
	gsSP1Triangle(2, 8, 10, 0), 
	gsSP1Triangle(5, 6, 11, 0), 
	gsSP1Triangle(5, 11, 9, 0), 
	gsSP1Triangle(6, 7, 12, 0), 
	gsSPVertex(nintendo_logo_v + 284, 8, 1),
	gsSPVertex(nintendo_logo_v + 294, 1, 9),
	gsSPVertex(nintendo_logo_v + 709, 1, 10),
	gsSPVertex(nintendo_logo_v + 714, 3, 11),
	gsSP1Triangle(2, 5, 4, 0),
	gsSP1Triangle(0, 10, 2, 0),
	gsSP1Triangle(1, 4, 12, 0), 
	gsSP1Triangle(1, 12, 11, 0), 
	gsSP1Triangle(2, 4, 1, 0), 
	gsSP1Triangle(0, 2, 1, 0), 
	gsSP1Triangle(2, 3, 13, 0), 
	gsSP1Triangle(2, 13, 9, 0), 
	gsSP1Triangle(3, 2, 10, 0), 
	gsSP1Triangle(2, 9, 8, 0), 
	gsSP1Triangle(2, 8, 7, 0), 
	gsSP1Triangle(2, 7, 6, 0), 
	gsSP1Triangle(2, 6, 5, 0), 
	gsSPVertex(nintendo_logo_v + 277, 2, 1),
	gsSPVertex(nintendo_logo_v + 281, 1, 3),
	gsSPVertex(nintendo_logo_v + 287, 5, 4),
	gsSPVertex(nintendo_logo_v + 297, 1, 9),
	gsSPVertex(nintendo_logo_v + 715, 1, 10),
	gsSPVertex(nintendo_logo_v + 717, 4, 11),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(2, 1, 0, 0),
	gsSP1Triangle(1, 2, 3, 0), 
	gsSP1Triangle(4, 5, 11, 0), 
	gsSP1Triangle(4, 11, 10, 0), 
	gsSP1Triangle(5, 12, 11, 0), 
	gsSP1Triangle(5, 6, 12, 0), 
	gsSP1Triangle(6, 7, 13, 0), 
	gsSP1Triangle(6, 13, 12, 0), 
	gsSP1Triangle(7, 9, 14, 0), 
	gsSP1Triangle(7, 14, 13, 0), 
	gsSPVertex(nintendo_logo_v + 277, 1, 0),
	gsSPVertex(nintendo_logo_v + 281, 1, 1),
	gsSPVertex(nintendo_logo_v + 291, 10, 2),
	gsSPVertex(nintendo_logo_v + 716, 1, 12),
	gsSPVertex(nintendo_logo_v + 721, 2, 13),
	gsSP1Triangle(0, 1, 7, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(4, 2, 11, 0), 
	gsSP1Triangle(5, 11, 2, 0), 
	gsSP1Triangle(2, 3, 10, 0), 
	gsSP1Triangle(2, 10, 13, 0), 
	gsSP1Triangle(2, 13, 9, 0), 
	gsSP1Triangle(2, 9, 8, 0), 
	gsSP1Triangle(6, 5, 12, 0), 
	gsSP1Triangle(5, 6, 14, 0), 
	gsSP1Triangle(5, 14, 11, 0), 
	gsSPVertex(nintendo_logo_v + 292, 2, 0),
	gsSPVertex(nintendo_logo_v + 297, 5, 2),
	gsSPVertex(nintendo_logo_v + 442, 1, 7),
	gsSPVertex(nintendo_logo_v + 444, 1, 8),
	gsSPVertex(nintendo_logo_v + 720, 3, 9),
	gsSPVertex(nintendo_logo_v + 724, 1, 12),
	gsSPVertex(nintendo_logo_v + 729, 2, 13),
	gsSP1Triangle(2, 3, 12, 0),
	gsSP1Triangle(2, 12, 9, 0), 
	gsSP1Triangle(3, 10, 7, 0), 
	gsSP1Triangle(3, 7, 12, 0), 
	gsSP1Triangle(4, 7, 10, 0), 
	gsSP1Triangle(4, 8, 7, 0), 
	gsSP1Triangle(4, 0, 13, 0), 
	gsSP1Triangle(4, 13, 8, 0), 
	gsSP1Triangle(0, 1, 13, 0), 
	gsSP1Triangle(5, 11, 6, 0), 
	gsSP1Triangle(5, 6, 14, 0), 
	gsSP1Triangle(1, 5, 14, 0), 
	gsSP1Triangle(7, 8, 6, 0), 
	gsSP1Triangle(8, 14, 6, 0), 
	gsSP1Triangle(8, 1, 14, 0), 
	gsSP1Triangle(8, 13, 1, 0), 
	gsSPVertex(nintendo_logo_v + 276, 1, 0),
	gsSPVertex(nintendo_logo_v + 286, 1, 1),
	gsSPVertex(nintendo_logo_v + 295, 1, 2),
	gsSPVertex(nintendo_logo_v + 301, 4, 3),
	gsSPVertex(nintendo_logo_v + 708, 2, 7),
	gsSPVertex(nintendo_logo_v + 716, 1, 9),
	gsSPVertex(nintendo_logo_v + 722, 2, 10),
	gsSPVertex(nintendo_logo_v + 731, 1, 12),
	gsSP1Triangle(0, 6, 7, 0),
	gsSP1Triangle(0, 7, 8, 0), 
	gsSP1Triangle(3, 10, 2, 0), 
	gsSP1Triangle(2, 9, 12, 0), 
	gsSP1Triangle(3, 2, 12, 0), 
	gsSP1Triangle(1, 8, 11, 0), 
	gsSP1Triangle(4, 11, 8, 0), 
	gsSP1Triangle(4, 8, 7, 0), 
	gsSP1Triangle(5, 4, 7, 0), 
	gsSP1Triangle(5, 7, 6, 0), 
	gsSP1Triangle(1, 4, 5, 0), 
	gsSP1Triangle(3, 9, 1, 0), 
	gsSP1Triangle(1, 11, 4, 0), 
	gsSP1Triangle(3, 12, 9, 0), 
	gsSPVertex(nintendo_logo_v + 275, 3, 0),
	gsSPVertex(nintendo_logo_v + 303, 5, 3),
	gsSPVertex(nintendo_logo_v + 443, 1, 8),
	gsSPVertex(nintendo_logo_v + 705, 3, 9),
	gsSPVertex(nintendo_logo_v + 727, 1, 12),
	gsSPVertex(nintendo_logo_v + 733, 1, 13),
	gsSP1Triangle(6, 13, 8, 0),
	gsSP1Triangle(1, 10, 11, 0),
	gsSP1Triangle(1, 9, 10, 0), 
	gsSP1Triangle(1, 11, 4, 0), 
	gsSP1Triangle(2, 0, 1, 0), 
	gsSP1Triangle(2, 7, 6, 0), 
	gsSP1Triangle(2, 6, 12, 0), 
	gsSP1Triangle(2, 12, 0, 0), 
	gsSP1Triangle(4, 11, 10, 0), 
	gsSP1Triangle(4, 10, 3, 0), 
	gsSP1Triangle(5, 0, 12, 0), 
	gsSP1Triangle(0, 5, 9, 0), 
	gsSP1Triangle(5, 12, 8, 0), 
	gsSP1Triangle(6, 8, 12, 0), 
	gsSP1Triangle(7, 13, 6, 0), 
	gsSPVertex(nintendo_logo_v + 277, 1, 0),
	gsSPVertex(nintendo_logo_v + 296, 1, 1),
	gsSPVertex(nintendo_logo_v + 307, 5, 2),
	gsSPVertex(nintendo_logo_v + 470, 1, 7),
	gsSPVertex(nintendo_logo_v + 725, 2, 8),
	gsSPVertex(nintendo_logo_v + 728, 1, 10),
	gsSPVertex(nintendo_logo_v + 732, 4, 11),
	gsSP1Triangle(1, 10, 0, 0),
	gsSP1Triangle(0, 8, 9, 0), 
	gsSP1Triangle(0, 9, 2, 0), 
	gsSP1Triangle(2, 3, 12, 0), 
	gsSP1Triangle(3, 2, 9, 0), 
	gsSP1Triangle(4, 9, 8, 0), 
	gsSP1Triangle(3, 9, 4, 0), 
	gsSP1Triangle(4, 8, 5, 0), 
	gsSP1Triangle(5, 8, 10, 0), 
	gsSP1Triangle(0, 10, 8, 0), 
	gsSP1Triangle(1, 11, 10, 0), 
	gsSP1Triangle(5, 10, 11, 0), 
	gsSP1Triangle(6, 7, 13, 0), 
	gsSP1Triangle(6, 13, 14, 0), 
	gsSPVertex(nintendo_logo_v + 311, 1, 0),
	gsSPVertex(nintendo_logo_v + 313, 1, 1),
	gsSPVertex(nintendo_logo_v + 315, 1, 2),
	gsSPVertex(nintendo_logo_v + 317, 5, 3),
	gsSPVertex(nintendo_logo_v + 736, 1, 8),
	gsSPVertex(nintendo_logo_v + 739, 5, 9),
	gsSP1Triangle(6, 7, 9, 0),
	gsSP1Triangle(0, 7, 6, 0),
	gsSP1Triangle(0, 6, 5, 0), 
	gsSP1Triangle(0, 5, 4, 0), 
	gsSP1Triangle(0, 4, 8, 0), 
	gsSP1Triangle(0, 8, 2, 0), 
	gsSP1Triangle(2, 1, 0, 0), 
	gsSP1Triangle(3, 8, 4, 0), 
	gsSP1Triangle(3, 12, 8, 0), 
	gsSP1Triangle(2, 8, 12, 0), 
	gsSP1Triangle(1, 2, 13, 0), 
	gsSP1Triangle(2, 12, 13, 0), 
	gsSP1Triangle(4, 5, 10, 0), 
	gsSP1Triangle(4, 10, 3, 0), 
	gsSP1Triangle(5, 6, 11, 0), 
	gsSP1Triangle(5, 11, 10, 0), 
	gsSP1Triangle(6, 9, 11, 0), 
	gsSPVertex(nintendo_logo_v + 321, 4, 1),
	gsSPVertex(nintendo_logo_v + 326, 1, 5),
	gsSPVertex(nintendo_logo_v + 332, 1, 6),
	gsSPVertex(nintendo_logo_v + 335, 3, 7),
	gsSPVertex(nintendo_logo_v + 738, 2, 10),
	gsSPVertex(nintendo_logo_v + 744, 3, 12),
	gsSP1Triangle(1, 5, 12, 0),
	gsSP1Triangle(1, 12, 11, 0), 
	gsSP1Triangle(0, 2, 1, 0), 
	gsSP1Triangle(2, 5, 1, 0), 
	gsSP1Triangle(3, 13, 2, 0), 
	gsSP1Triangle(3, 2, 10, 0), 
	gsSP1Triangle(4, 14, 2, 0), 
	gsSP1Triangle(4, 2, 13, 0), 
	gsSP1Triangle(2, 9, 8, 0), 
	gsSP1Triangle(2, 8, 7, 0), 
	gsSP1Triangle(2, 7, 6, 0), 
	gsSP1Triangle(0, 10, 2, 0), 
	gsSPVertex(nintendo_logo_v + 313, 2, 1),
	gsSPVertex(nintendo_logo_v + 322, 1, 3),
	gsSPVertex(nintendo_logo_v + 325, 5, 4),
	gsSPVertex(nintendo_logo_v + 743, 2, 9),
	gsSPVertex(nintendo_logo_v + 750, 1, 11),
	gsSPVertex(nintendo_logo_v + 754, 2, 12),
	gsSP1Triangle(1, 2, 0, 0),
	gsSP1Triangle(3, 8, 7, 0), 
	gsSP1Triangle(3, 7, 6, 0), 
	gsSP1Triangle(3, 6, 5, 0), 
	gsSP1Triangle(1, 9, 4, 0), 
	gsSP1Triangle(4, 2, 1, 0), 
	gsSP1Triangle(5, 6, 11, 0), 
	gsSP1Triangle(5, 11, 10, 0), 
	gsSP1Triangle(6, 7, 12, 0), 
	gsSP1Triangle(6, 12, 11, 0), 
	gsSP1Triangle(7, 8, 13, 0), 
	gsSP1Triangle(7, 13, 12, 0), 
	gsSPVertex(nintendo_logo_v + 322, 1, 0),
	gsSPVertex(nintendo_logo_v + 329, 8, 1),
	gsSPVertex(nintendo_logo_v + 469, 1, 9),
	gsSPVertex(nintendo_logo_v + 747, 1, 10),
	gsSPVertex(nintendo_logo_v + 751, 1, 11),
	gsSPVertex(nintendo_logo_v + 755, 2, 12),
	gsSPVertex(nintendo_logo_v + 758, 1, 14),
	gsSP1Triangle(7, 11, 14, 0),
	gsSP1Triangle(0, 4, 10, 0),
	gsSP1Triangle(0, 10, 2, 0), 
	gsSP1Triangle(0, 2, 1, 0), 
	gsSP1Triangle(1, 2, 13, 0), 
	gsSP1Triangle(1, 13, 12, 0), 
	gsSP1Triangle(2, 9, 13, 0), 
	gsSP1Triangle(2, 10, 9, 0), 
	gsSP1Triangle(3, 9, 10, 0), 
	gsSP1Triangle(4, 3, 10, 0), 
	gsSP1Triangle(5, 4, 6, 0), 
	gsSP1Triangle(6, 4, 7, 0), 
	gsSP1Triangle(4, 5, 3, 0), 
	gsSP1Triangle(6, 7, 14, 0), 
	gsSP1Triangle(7, 8, 11, 0), 
	gsSPVertex(nintendo_logo_v + 336, 4, 1),
	gsSPVertex(nintendo_logo_v + 341, 4, 5),
	gsSPVertex(nintendo_logo_v + 353, 1, 9),
	gsSPVertex(nintendo_logo_v + 751, 3, 10),
	gsSP1Triangle(2, 12, 8, 0),
	gsSP1Triangle(1, 5, 11, 0),
	gsSP1Triangle(1, 11, 10, 0), 
	gsSP1Triangle(2, 5, 1, 0), 
	gsSP1Triangle(3, 12, 2, 0), 
	gsSP1Triangle(4, 3, 2, 0), 
	gsSP1Triangle(4, 2, 9, 0), 
	gsSP1Triangle(2, 8, 7, 0), 
	gsSP1Triangle(2, 7, 6, 0), 
	gsSP1Triangle(2, 6, 5, 0), 
	gsSP1Triangle(0, 9, 2, 0), 
	gsSPVertex(nintendo_logo_v + 311, 1, 0),
	gsSPVertex(nintendo_logo_v + 314, 1, 1),
	gsSPVertex(nintendo_logo_v + 316, 1, 2),
	gsSPVertex(nintendo_logo_v + 325, 1, 3),
	gsSPVertex(nintendo_logo_v + 340, 5, 4),
	gsSPVertex(nintendo_logo_v + 348, 1, 9),
	gsSPVertex(nintendo_logo_v + 752, 1, 10),
	gsSPVertex(nintendo_logo_v + 757, 1, 11),
	gsSPVertex(nintendo_logo_v + 761, 3, 12),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(1, 2, 0, 0),
	gsSP1Triangle(3, 11, 1, 0), 
	gsSP1Triangle(4, 2, 1, 0), 
	gsSP1Triangle(4, 1, 11, 0), 
	gsSP1Triangle(5, 12, 10, 0), 
	gsSP1Triangle(5, 6, 12, 0), 
	gsSP1Triangle(6, 7, 13, 0), 
	gsSP1Triangle(6, 13, 12, 0), 
	gsSP1Triangle(7, 14, 13, 0), 
	gsSP1Triangle(7, 9, 14, 0), 
	gsSPVertex(nintendo_logo_v + 312, 1, 1),
	gsSPVertex(nintendo_logo_v + 316, 1, 2),
	gsSPVertex(nintendo_logo_v + 340, 1, 3),
	gsSPVertex(nintendo_logo_v + 344, 6, 4),
	gsSPVertex(nintendo_logo_v + 351, 1, 10),
	gsSPVertex(nintendo_logo_v + 362, 1, 11),
	gsSPVertex(nintendo_logo_v + 753, 1, 12),
	gsSPVertex(nintendo_logo_v + 764, 1, 13),
	gsSPVertex(nintendo_logo_v + 767, 1, 14),
	gsSP1Triangle(2, 9, 14, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(6, 4, 12, 0), 
	gsSP1Triangle(4, 9, 8, 0), 
	gsSP1Triangle(4, 5, 13, 0), 
	gsSP1Triangle(4, 13, 10, 0), 
	gsSP1Triangle(4, 10, 9, 0), 
	gsSP1Triangle(7, 2, 3, 0), 
	gsSP1Triangle(2, 11, 1, 0), 
	gsSP1Triangle(2, 1, 0, 0), 
	gsSP1Triangle(2, 14, 11, 0), 
	gsSPVertex(nintendo_logo_v + 316, 1, 0),
	gsSPVertex(nintendo_logo_v + 348, 4, 1),
	gsSPVertex(nintendo_logo_v + 363, 1, 5),
	gsSPVertex(nintendo_logo_v + 366, 1, 6),
	gsSPVertex(nintendo_logo_v + 369, 3, 7),
	gsSPVertex(nintendo_logo_v + 763, 1, 10),
	gsSPVertex(nintendo_logo_v + 767, 3, 11),
	gsSPVertex(nintendo_logo_v + 777, 1, 14),
	gsSP1Triangle(1, 6, 12, 0),
	gsSP1Triangle(1, 12, 10, 0), 
	gsSP1Triangle(2, 6, 1, 0), 
	gsSP1Triangle(3, 11, 2, 0), 
	gsSP1Triangle(3, 2, 14, 0), 
	gsSP1Triangle(2, 4, 13, 0), 
	gsSP1Triangle(2, 13, 14, 0), 
	gsSP1Triangle(0, 5, 2, 0), 
	gsSP1Triangle(2, 9, 8, 0), 
	gsSP1Triangle(2, 8, 7, 0), 
	gsSPVertex(nintendo_logo_v + 322, 1, 0),
	gsSPVertex(nintendo_logo_v + 338, 2, 1),
	gsSPVertex(nintendo_logo_v + 345, 2, 3),
	gsSPVertex(nintendo_logo_v + 351, 4, 5),
	gsSPVertex(nintendo_logo_v + 753, 1, 9),
	gsSPVertex(nintendo_logo_v + 764, 3, 10),
	gsSPVertex(nintendo_logo_v + 769, 2, 13),
	gsSP1Triangle(4, 2, 12, 0),
	gsSP1Triangle(5, 10, 14, 0),
	gsSP1Triangle(5, 14, 13, 0), 
	gsSP1Triangle(6, 14, 10, 0), 
	gsSP1Triangle(6, 10, 3, 0), 
	gsSP1Triangle(3, 4, 6, 0), 
	gsSP1Triangle(4, 9, 11, 0), 
	gsSP1Triangle(1, 11, 9, 0), 
	gsSP1Triangle(7, 8, 12, 0), 
	gsSP1Triangle(7, 12, 2, 0), 
	gsSP1Triangle(0, 8, 7, 0), 
	gsSP1Triangle(4, 11, 1, 0), 
	gsSP1Triangle(4, 1, 2, 0), 
	gsSPVertex(nintendo_logo_v + 324, 1, 1),
	gsSPVertex(nintendo_logo_v + 354, 4, 2),
	gsSPVertex(nintendo_logo_v + 468, 1, 6),
	gsSPVertex(nintendo_logo_v + 746, 1, 7),
	gsSPVertex(nintendo_logo_v + 748, 2, 8),
	gsSPVertex(nintendo_logo_v + 766, 1, 10),
	gsSPVertex(nintendo_logo_v + 774, 2, 11),
	gsSP1Triangle(0, 7, 8, 0),
	gsSP1Triangle(2, 9, 12, 0),
	gsSP1Triangle(2, 12, 10, 0), 
	gsSP1Triangle(0, 9, 2, 0), 
	gsSP1Triangle(3, 12, 9, 0), 
	gsSP1Triangle(3, 9, 4, 0), 
	gsSP1Triangle(0, 4, 9, 0), 
	gsSP1Triangle(4, 11, 3, 0), 
	gsSP1Triangle(4, 5, 11, 0), 
	gsSP1Triangle(0, 5, 4, 0), 
	gsSP1Triangle(5, 6, 11, 0), 
	gsSP1Triangle(5, 8, 6, 0), 
	gsSP1Triangle(0, 8, 5, 0), 
	gsSP1Triangle(1, 6, 8, 0), 
	gsSP1Triangle(1, 8, 7, 0), 
	gsSPVertex(nintendo_logo_v + 311, 2, 0),
	gsSPVertex(nintendo_logo_v + 323, 1, 2),
	gsSPVertex(nintendo_logo_v + 358, 5, 3),
	gsSPVertex(nintendo_logo_v + 471, 1, 8),
	gsSPVertex(nintendo_logo_v + 734, 2, 9),
	gsSPVertex(nintendo_logo_v + 737, 2, 11),
	gsSPVertex(nintendo_logo_v + 771, 1, 13),
	gsSPVertex(nintendo_logo_v + 779, 1, 14),
	gsSP1Triangle(5, 14, 9, 0),
	gsSP1Triangle(3, 2, 12, 0),
	gsSP1Triangle(3, 12, 4, 0), 
	gsSP1Triangle(0, 4, 12, 0), 
	gsSP1Triangle(4, 11, 5, 0), 
	gsSP1Triangle(4, 5, 3, 0), 
	gsSP1Triangle(0, 11, 4, 0), 
	gsSP1Triangle(5, 11, 6, 0), 
	gsSP1Triangle(0, 6, 11, 0), 
	gsSP1Triangle(6, 10, 9, 0), 
	gsSP1Triangle(6, 9, 14, 0), 
	gsSP1Triangle(5, 6, 14, 0), 
	gsSP1Triangle(0, 10, 6, 0), 
	gsSP1Triangle(1, 7, 13, 0), 
	gsSP1Triangle(1, 13, 8, 0), 
	gsSPVertex(nintendo_logo_v + 316, 1, 0),
	gsSPVertex(nintendo_logo_v + 347, 1, 1),
	gsSPVertex(nintendo_logo_v + 349, 2, 2),
	gsSPVertex(nintendo_logo_v + 362, 4, 4),
	gsSPVertex(nintendo_logo_v + 463, 1, 8),
	gsSPVertex(nintendo_logo_v + 767, 1, 9),
	gsSPVertex(nintendo_logo_v + 771, 1, 10),
	gsSPVertex(nintendo_logo_v + 776, 1, 11),
	gsSPVertex(nintendo_logo_v + 778, 1, 12),
	gsSP1Triangle(4, 9, 3, 0),
	gsSP1Triangle(4, 3, 10, 0), 
	gsSP1Triangle(5, 7, 12, 0), 
	gsSP1Triangle(5, 12, 8, 0), 
	gsSP1Triangle(6, 5, 8, 0), 
	gsSP1Triangle(0, 7, 5, 0), 
	gsSP1Triangle(2, 5, 6, 0), 
	gsSP1Triangle(7, 1, 11, 0), 
	gsSP1Triangle(7, 11, 12, 0), 
	gsSP1Triangle(8, 11, 3, 0), 
	gsSPVertex(nintendo_logo_v + 331, 1, 0),
	gsSPVertex(nintendo_logo_v + 333, 2, 1),
	gsSPVertex(nintendo_logo_v + 349, 1, 3),
	gsSPVertex(nintendo_logo_v + 366, 3, 4),
	gsSPVertex(nintendo_logo_v + 469, 1, 7),
	gsSPVertex(nintendo_logo_v + 759, 2, 8),
	gsSPVertex(nintendo_logo_v + 768, 1, 10),
	gsSPVertex(nintendo_logo_v + 772, 2, 11),
	gsSP1Triangle(0, 1, 8, 0),
	gsSP1Triangle(0, 8, 9, 0), 
	gsSP1Triangle(0, 9, 7, 0), 
	gsSP1Triangle(1, 2, 8, 0), 
	gsSP1Triangle(4, 5, 12, 0), 
	gsSP1Triangle(4, 12, 10, 0), 
	gsSP1Triangle(3, 5, 4, 0), 
	gsSP1Triangle(5, 6, 11, 0), 
	gsSP1Triangle(5, 11, 12, 0), 
	gsSP1Triangle(3, 6, 5, 0), 
	gsSP1Triangle(7, 8, 2, 0), 
	gsSP1Triangle(7, 9, 8, 0), 
	gsSPVertex(nintendo_logo_v + 349, 1, 0),
	gsSPVertex(nintendo_logo_v + 364, 1, 1),
	gsSPVertex(nintendo_logo_v + 368, 5, 2),
	gsSPVertex(nintendo_logo_v + 374, 1, 7),
	gsSPVertex(nintendo_logo_v + 463, 5, 8),
	gsSPVertex(nintendo_logo_v + 772, 1, 13),
	gsSPVertex(nintendo_logo_v + 780, 1, 14),
	gsSP1Triangle(2, 3, 10, 0),
	gsSP1Triangle(2, 10, 13, 0), 
	gsSP1Triangle(0, 3, 2, 0), 
	gsSP1Triangle(3, 4, 9, 0), 
	gsSP1Triangle(3, 9, 10, 0), 
	gsSP1Triangle(4, 5, 11, 0), 
	gsSP1Triangle(4, 11, 9, 0), 
	gsSP1Triangle(5, 1, 12, 0), 
	gsSP1Triangle(5, 12, 11, 0), 
	gsSP1Triangle(0, 1, 5, 0), 
	gsSP1Triangle(1, 8, 12, 0), 
	gsSP1Triangle(6, 7, 14, 0), 
	gsSPVertex(nintendo_logo_v + 374, 8, 0),
	gsSPVertex(nintendo_logo_v + 383, 2, 8),
	gsSPVertex(nintendo_logo_v + 781, 5, 10),
	gsSP1Triangle(7, 5, 14, 0),
	gsSP1Triangle(0, 10, 5, 0),
	gsSP1Triangle(2, 1, 0, 0), 
	gsSP1Triangle(0, 5, 4, 0), 
	gsSP1Triangle(3, 2, 4, 0), 
	gsSP1Triangle(3, 4, 11, 0), 
	gsSP1Triangle(4, 8, 12, 0), 
	gsSP1Triangle(4, 12, 11, 0), 
	gsSP1Triangle(5, 8, 4, 0), 
	gsSP1Triangle(0, 4, 2, 0), 
	gsSP1Triangle(6, 2, 3, 0), 
	gsSP1Triangle(6, 1, 2, 0), 
	gsSP1Triangle(5, 7, 9, 0), 
	gsSP1Triangle(5, 9, 13, 0), 
	gsSP1Triangle(5, 13, 8, 0), 
	gsSPVertex(nintendo_logo_v + 373, 3, 0),
	gsSPVertex(nintendo_logo_v + 380, 1, 3),
	gsSPVertex(nintendo_logo_v + 382, 5, 4),
	gsSPVertex(nintendo_logo_v + 391, 1, 9),
	gsSPVertex(nintendo_logo_v + 393, 1, 10),
	gsSPVertex(nintendo_logo_v + 398, 1, 11),
	gsSPVertex(nintendo_logo_v + 488, 1, 12),
	gsSPVertex(nintendo_logo_v + 783, 2, 13),
	gsSP1Triangle(4, 9, 2, 0),
	gsSP1Triangle(4, 2, 3, 0), 
	gsSP1Triangle(2, 9, 0, 0), 
	gsSP1Triangle(2, 0, 1, 0), 
	gsSP1Triangle(5, 7, 13, 0), 
	gsSP1Triangle(5, 14, 7, 0), 
	gsSP1Triangle(6, 10, 14, 0), 
	gsSP1Triangle(7, 14, 10, 0), 
	gsSP1Triangle(8, 6, 12, 0), 
	gsSP1Triangle(6, 8, 11, 0), 
	gsSPVertex(nintendo_logo_v + 374, 1, 1),
	gsSPVertex(nintendo_logo_v + 382, 1, 2),
	gsSPVertex(nintendo_logo_v + 387, 8, 3),
	gsSPVertex(nintendo_logo_v + 780, 1, 11),
	gsSPVertex(nintendo_logo_v + 788, 2, 12),
	gsSPVertex(nintendo_logo_v + 792, 1, 14),
	gsSP1Triangle(9, 10, 13, 0),
	gsSP1Triangle(0, 11, 1, 0),
	gsSP1Triangle(3, 0, 14, 0), 
	gsSP1Triangle(4, 12, 0, 0), 
	gsSP1Triangle(4, 0, 3, 0), 
	gsSP1Triangle(5, 14, 0, 0), 
	gsSP1Triangle(0, 12, 11, 0), 
	gsSP1Triangle(6, 5, 0, 0), 
	gsSP1Triangle(7, 6, 0, 0), 
	gsSP1Triangle(8, 6, 7, 0), 
	gsSP1Triangle(8, 7, 2, 0), 
	gsSPVertex(nintendo_logo_v + 384, 1, 0),
	gsSPVertex(nintendo_logo_v + 393, 6, 1),
	gsSPVertex(nintendo_logo_v + 400, 1, 7),
	gsSPVertex(nintendo_logo_v + 403, 1, 8),
	gsSPVertex(nintendo_logo_v + 411, 1, 9),
	gsSPVertex(nintendo_logo_v + 486, 1, 10),
	gsSPVertex(nintendo_logo_v + 786, 1, 11),
	gsSPVertex(nintendo_logo_v + 789, 1, 12),
	gsSPVertex(nintendo_logo_v + 794, 2, 13),
	gsSP1Triangle(0, 6, 4, 0),
	gsSP1Triangle(0, 11, 2, 0), 
	gsSP1Triangle(0, 2, 1, 0), 
	gsSP1Triangle(0, 4, 11, 0), 
	gsSP1Triangle(2, 11, 3, 0), 
	gsSP1Triangle(2, 3, 12, 0), 
	gsSP1Triangle(3, 11, 7, 0), 
	gsSP1Triangle(4, 7, 11, 0), 
	gsSP1Triangle(5, 4, 10, 0), 
	gsSP1Triangle(5, 9, 4, 0), 
	gsSP1Triangle(6, 10, 4, 0), 
	gsSP1Triangle(4, 13, 8, 0), 
	gsSP1Triangle(4, 9, 13, 0), 
	gsSP1Triangle(4, 8, 14, 0), 
	gsSPVertex(nintendo_logo_v + 389, 2, 0),
	gsSPVertex(nintendo_logo_v + 392, 1, 2),
	gsSPVertex(nintendo_logo_v + 395, 2, 3),
	gsSPVertex(nintendo_logo_v + 399, 5, 5),
	gsSPVertex(nintendo_logo_v + 406, 1, 10),
	gsSPVertex(nintendo_logo_v + 795, 3, 11),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(5, 1, 2, 0),
	gsSP1Triangle(5, 0, 1, 0), 
	gsSP1Triangle(6, 7, 12, 0), 
	gsSP1Triangle(6, 12, 13, 0), 
	gsSP1Triangle(3, 6, 13, 0), 
	gsSP1Triangle(4, 7, 6, 0), 
	gsSP1Triangle(7, 11, 8, 0), 
	gsSP1Triangle(7, 8, 12, 0), 
	gsSP1Triangle(4, 11, 7, 0), 
	gsSP1Triangle(8, 11, 10, 0), 
	gsSPVertex(nintendo_logo_v + 399, 1, 1),
	gsSPVertex(nintendo_logo_v + 403, 6, 2),
	gsSPVertex(nintendo_logo_v + 410, 1, 8),
	gsSPVertex(nintendo_logo_v + 792, 3, 9),
	gsSPVertex(nintendo_logo_v + 798, 1, 12),
	gsSP1Triangle(7, 10, 6, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(4, 2, 11, 0), 
	gsSP1Triangle(2, 3, 8, 0), 
	gsSP1Triangle(2, 8, 7, 0), 
	gsSP1Triangle(2, 7, 6, 0), 
	gsSP1Triangle(2, 6, 12, 0), 
	gsSP1Triangle(2, 12, 5, 0), 
	gsSP1Triangle(1, 10, 0, 0), 
	gsSP1Triangle(0, 10, 7, 0), 
	gsSP1Triangle(0, 7, 9, 0), 
	gsSPVertex(nintendo_logo_v + 402, 1, 0),
	gsSPVertex(nintendo_logo_v + 406, 5, 1),
	gsSPVertex(nintendo_logo_v + 487, 1, 6),
	gsSPVertex(nintendo_logo_v + 490, 1, 7),
	gsSPVertex(nintendo_logo_v + 492, 1, 8),
	gsSPVertex(nintendo_logo_v + 792, 1, 9),
	gsSPVertex(nintendo_logo_v + 798, 1, 10),
	gsSPVertex(nintendo_logo_v + 800, 2, 11),
	gsSP1Triangle(3, 8, 9, 0),
	gsSP1Triangle(0, 1, 6, 0),
	gsSP1Triangle(1, 10, 7, 0), 
	gsSP1Triangle(1, 7, 6, 0), 
	gsSP1Triangle(2, 7, 10, 0), 
	gsSP1Triangle(2, 4, 7, 0), 
	gsSP1Triangle(3, 5, 11, 0), 
	gsSP1Triangle(3, 11, 12, 0), 
	gsSP1Triangle(3, 12, 8, 0), 
	gsSPVertex(nintendo_logo_v + 386, 1, 0),
	gsSPVertex(nintendo_logo_v + 397, 2, 1),
	gsSPVertex(nintendo_logo_v + 404, 2, 3),
	gsSPVertex(nintendo_logo_v + 410, 3, 5),
	gsSPVertex(nintendo_logo_v + 486, 1, 8),
	gsSPVertex(nintendo_logo_v + 794, 1, 9),
	gsSPVertex(nintendo_logo_v + 799, 2, 10),
	gsSPVertex(nintendo_logo_v + 802, 1, 12),
	gsSP1Triangle(5, 3, 12, 0),
	gsSP1Triangle(5, 12, 11, 0), 
	gsSP1Triangle(3, 4, 12, 0), 
	gsSP1Triangle(4, 9, 10, 0), 
	gsSP1Triangle(6, 10, 9, 0), 
	gsSP1Triangle(6, 1, 10, 0), 
	gsSP1Triangle(2, 7, 8, 0), 
	gsSP1Triangle(7, 2, 0, 0), 
	gsSP1Triangle(4, 1, 8, 0), 
	gsSP1Triangle(4, 10, 1, 0), 
	gsSPVertex(nintendo_logo_v + 372, 1, 0),
	gsSPVertex(nintendo_logo_v + 374, 1, 1),
	gsSPVertex(nintendo_logo_v + 379, 1, 2),
	gsSPVertex(nintendo_logo_v + 381, 1, 3),
	gsSPVertex(nintendo_logo_v + 384, 1, 4),
	gsSPVertex(nintendo_logo_v + 386, 1, 5),
	gsSPVertex(nintendo_logo_v + 412, 1, 6),
	gsSPVertex(nintendo_logo_v + 488, 1, 7),
	gsSPVertex(nintendo_logo_v + 491, 1, 8),
	gsSPVertex(nintendo_logo_v + 781, 1, 9),
	gsSPVertex(nintendo_logo_v + 785, 1, 10),
	gsSPVertex(nintendo_logo_v + 787, 1, 11),
	gsSPVertex(nintendo_logo_v + 791, 1, 12),
	gsSP1Triangle(2, 8, 10, 0),
	gsSP1Triangle(0, 9, 1, 0),
	gsSP1Triangle(6, 5, 12, 0), 
	gsSP1Triangle(5, 7, 12, 0), 
	gsSP1Triangle(4, 3, 11, 0), 
	gsSP1Triangle(3, 10, 11, 0), 
	gsSP1Triangle(0, 8, 9, 0), 
	gsSP1Triangle(2, 9, 8, 0), 
	gsSP1Triangle(4, 11, 7, 0), 
	gsSP1Triangle(7, 11, 10, 0), 
	gsSP1Triangle(7, 10, 8, 0), 
	gsSPVertex(nintendo_logo_v + 387, 2, 1),
	gsSPVertex(nintendo_logo_v + 399, 1, 3),
	gsSPVertex(nintendo_logo_v + 407, 1, 4),
	gsSPVertex(nintendo_logo_v + 409, 1, 5),
	gsSPVertex(nintendo_logo_v + 413, 1, 6),
	gsSPVertex(nintendo_logo_v + 489, 1, 7),
	gsSPVertex(nintendo_logo_v + 492, 1, 8),
	gsSPVertex(nintendo_logo_v + 780, 1, 9),
	gsSPVertex(nintendo_logo_v + 788, 1, 10),
	gsSPVertex(nintendo_logo_v + 792, 2, 11),
	gsSP1Triangle(8, 7, 3, 0),
	gsSP1Triangle(0, 9, 6, 0),
	gsSP1Triangle(6, 9, 10, 0), 
	gsSP1Triangle(6, 10, 2, 0), 
	gsSP1Triangle(1, 11, 8, 0), 
	gsSP1Triangle(3, 7, 12, 0), 
	gsSP1Triangle(5, 4, 12, 0), 
	gsSP1Triangle(5, 12, 7, 0), 
	gsSP1Triangle(2, 1, 8, 0), 
	gsSPVertex(nintendo_logo_v + 414, 5, 0),
	gsSPVertex(nintendo_logo_v + 420, 4, 5),
	gsSPVertex(nintendo_logo_v + 433, 3, 9),
	gsSPVertex(nintendo_logo_v + 493, 1, 12),
	gsSPVertex(nintendo_logo_v + 803, 1, 13),
	gsSP1Triangle(3, 11, 1, 0),
	gsSP1Triangle(0, 1, 13, 0),
	gsSP1Triangle(1, 11, 12, 0), 
	gsSP1Triangle(1, 12, 13, 0), 
	gsSP1Triangle(1, 4, 2, 0), 
	gsSP1Triangle(1, 5, 4, 0), 
	gsSP1Triangle(2, 3, 1, 0), 
	gsSP1Triangle(1, 8, 7, 0), 
	gsSP1Triangle(1, 7, 6, 0), 
	gsSP1Triangle(1, 6, 5, 0), 
	gsSP1Triangle(1, 10, 9, 0), 
	gsSP1Triangle(1, 9, 8, 0), 
	gsSP1Triangle(1, 0, 10, 0), 
	gsSPVertex(nintendo_logo_v + 416, 8, 0),
	gsSPVertex(nintendo_logo_v + 428, 1, 8),
	gsSPVertex(nintendo_logo_v + 494, 2, 9),
	gsSPVertex(nintendo_logo_v + 804, 3, 11),
	gsSPVertex(nintendo_logo_v + 815, 1, 14),
	gsSP1Triangle(7, 8, 6, 0),
	gsSP1Triangle(2, 4, 11, 0),
	gsSP1Triangle(2, 11, 12, 0), 
	gsSP1Triangle(0, 2, 12, 0), 
	gsSP1Triangle(3, 1, 0, 0), 
	gsSP1Triangle(3, 0, 14, 0), 
	gsSP1Triangle(0, 12, 14, 0), 
	gsSP1Triangle(4, 13, 11, 0), 
	gsSP1Triangle(4, 5, 13, 0), 
	gsSP1Triangle(5, 6, 9, 0), 
	gsSP1Triangle(5, 9, 13, 0), 
	gsSP1Triangle(6, 8, 10, 0), 
	gsSP1Triangle(6, 10, 9, 0), 
	gsSPVertex(nintendo_logo_v + 417, 1, 0),
	gsSPVertex(nintendo_logo_v + 419, 1, 1),
	gsSPVertex(nintendo_logo_v + 423, 7, 2),
	gsSPVertex(nintendo_logo_v + 431, 3, 9),
	gsSPVertex(nintendo_logo_v + 439, 1, 12),
	gsSPVertex(nintendo_logo_v + 807, 2, 13),
	gsSP1Triangle(3, 2, 11, 0),
	gsSP1Triangle(4, 2, 3, 0), 
	gsSP1Triangle(2, 8, 7, 0), 
	gsSP1Triangle(2, 4, 10, 0), 
	gsSP1Triangle(2, 10, 6, 0), 
	gsSP1Triangle(2, 6, 8, 0), 
	gsSP1Triangle(5, 0, 1, 0), 
	gsSP1Triangle(6, 0, 5, 0), 
	gsSP1Triangle(0, 6, 9, 0), 
	gsSP1Triangle(0, 9, 13, 0), 
	gsSP1Triangle(0, 13, 12, 0), 
	gsSP1Triangle(0, 12, 14, 0), 
	gsSPVertex(nintendo_logo_v + 425, 8, 0),
	gsSPVertex(nintendo_logo_v + 441, 1, 8),
	gsSPVertex(nintendo_logo_v + 495, 3, 9),
	gsSPVertex(nintendo_logo_v + 816, 2, 12),
	gsSP1Triangle(3, 4, 10, 0),
	gsSP1Triangle(3, 10, 9, 0), 
	gsSP1Triangle(4, 12, 10, 0), 
	gsSP1Triangle(4, 8, 12, 0), 
	gsSP1Triangle(2, 8, 4, 0), 
	gsSP1Triangle(5, 11, 2, 0), 
	gsSP1Triangle(5, 2, 7, 0), 
	gsSP1Triangle(6, 2, 11, 0), 
	gsSP1Triangle(2, 1, 8, 0), 
	gsSP1Triangle(7, 0, 13, 0), 
	gsSP1Triangle(7, 13, 5, 0), 
	gsSP1Triangle(11, 10, 12, 0), 
	gsSP1Triangle(10, 11, 5, 0), 
	gsSP1Triangle(10, 5, 13, 0), 
	gsSPVertex(nintendo_logo_v + 414, 1, 0),
	gsSPVertex(nintendo_logo_v + 417, 1, 1),
	gsSPVertex(nintendo_logo_v + 424, 2, 2),
	gsSPVertex(nintendo_logo_v + 433, 4, 4),
	gsSPVertex(nintendo_logo_v + 493, 1, 8),
	gsSPVertex(nintendo_logo_v + 803, 1, 9),
	gsSPVertex(nintendo_logo_v + 810, 3, 10),
	gsSPVertex(nintendo_logo_v + 817, 2, 13),
	gsSP1Triangle(3, 2, 13, 0),
	gsSP1Triangle(4, 5, 10, 0), 
	gsSP1Triangle(4, 10, 14, 0), 
	gsSP1Triangle(2, 4, 14, 0), 
	gsSP1Triangle(5, 11, 10, 0), 
	gsSP1Triangle(5, 0, 11, 0), 
	gsSP1Triangle(0, 9, 11, 0), 
	gsSP1Triangle(6, 7, 12, 0), 
	gsSP1Triangle(6, 12, 8, 0), 
	gsSP1Triangle(1, 7, 6, 0), 
	gsSP1Triangle(2, 10, 11, 0), 
	gsSP1Triangle(2, 11, 9, 0), 
	gsSP1Triangle(2, 9, 8, 0), 
	gsSP1Triangle(2, 14, 10, 0), 
	gsSPVertex(nintendo_logo_v + 417, 1, 0),
	gsSPVertex(nintendo_logo_v + 436, 4, 1),
	gsSPVertex(nintendo_logo_v + 807, 3, 5),
	gsSPVertex(nintendo_logo_v + 812, 3, 8),
	gsSPVertex(nintendo_logo_v + 819, 1, 11),
	gsSPVertex(nintendo_logo_v + 821, 1, 12),
	gsSP1Triangle(1, 10, 8, 0),
	gsSP1Triangle(1, 2, 10, 0), 
	gsSP1Triangle(0, 2, 1, 0), 
	gsSP1Triangle(2, 7, 9, 0), 
	gsSP1Triangle(2, 9, 10, 0), 
	gsSP1Triangle(0, 7, 2, 0), 
	gsSP1Triangle(3, 9, 7, 0), 
	gsSP1Triangle(3, 7, 6, 0), 
	gsSP1Triangle(0, 6, 7, 0), 
	gsSP1Triangle(3, 6, 4, 0), 
	gsSP1Triangle(4, 11, 12, 0), 
	gsSP1Triangle(4, 5, 11, 0), 
	gsSP1Triangle(3, 4, 12, 0), 
	gsSP1Triangle(3, 12, 11, 0), 
	gsSPVertex(nintendo_logo_v + 286, 1, 0),
	gsSPVertex(nintendo_logo_v + 419, 1, 1),
	gsSPVertex(nintendo_logo_v + 426, 1, 2),
	gsSPVertex(nintendo_logo_v + 431, 1, 3),
	gsSPVertex(nintendo_logo_v + 440, 3, 4),
	gsSPVertex(nintendo_logo_v + 497, 1, 7),
	gsSPVertex(nintendo_logo_v + 715, 1, 8),
	gsSPVertex(nintendo_logo_v + 717, 1, 9),
	gsSPVertex(nintendo_logo_v + 724, 1, 10),
	gsSPVertex(nintendo_logo_v + 807, 1, 11),
	gsSPVertex(nintendo_logo_v + 816, 1, 12),
	gsSPVertex(nintendo_logo_v + 819, 2, 13),
	gsSP1Triangle(4, 13, 11, 0),
	gsSP1Triangle(4, 11, 3, 0), 
	gsSP1Triangle(3, 7, 4, 0), 
	gsSP1Triangle(5, 2, 14, 0), 
	gsSP1Triangle(5, 14, 12, 0), 
	gsSP1Triangle(2, 1, 14, 0), 
	gsSP1Triangle(0, 10, 6, 0), 
	gsSP1Triangle(0, 8, 9, 0), 
	gsSP1Triangle(7, 14, 1, 0), 
	gsSP1Triangle(7, 12, 14, 0), 
	gsSPVertex(nintendo_logo_v + 305, 1, 1),
	gsSPVertex(nintendo_logo_v + 308, 2, 2),
	gsSPVertex(nintendo_logo_v + 443, 1, 4),
	gsSPVertex(nintendo_logo_v + 711, 1, 5),
	gsSPVertex(nintendo_logo_v + 713, 3, 6),
	gsSPVertex(nintendo_logo_v + 717, 4, 9),
	gsSPVertex(nintendo_logo_v + 724, 1, 13),
	gsSPVertex(nintendo_logo_v + 733, 1, 14),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(0, 9, 10, 0),
	gsSP1Triangle(0, 10, 11, 0), 
	gsSP1Triangle(0, 11, 12, 0), 
	gsSP1Triangle(0, 12, 13, 0), 
	gsSP1Triangle(0, 4, 8, 0), 
	gsSP1Triangle(4, 7, 8, 0), 
	gsSP1Triangle(0, 1, 4, 0), 
	gsSP1Triangle(4, 14, 2, 0), 
	gsSP1Triangle(4, 2, 3, 0), 
	gsSP1Triangle(4, 5, 6, 0), 
	gsSPVertex(nintendo_logo_v + 281, 1, 0),
	gsSPVertex(nintendo_logo_v + 286, 1, 1),
	gsSPVertex(nintendo_logo_v + 296, 1, 2),
	gsSPVertex(nintendo_logo_v + 305, 1, 3),
	gsSPVertex(nintendo_logo_v + 309, 2, 4),
	gsSPVertex(nintendo_logo_v + 443, 1, 6),
	gsSPVertex(nintendo_logo_v + 705, 2, 7),
	gsSPVertex(nintendo_logo_v + 710, 3, 9),
	gsSPVertex(nintendo_logo_v + 732, 1, 12),
	gsSP1Triangle(1, 8, 7, 0),
	gsSP1Triangle(6, 9, 10, 0),
	gsSP1Triangle(6, 4, 5, 0), 
	gsSP1Triangle(6, 11, 9, 0), 
	gsSP1Triangle(6, 0, 11, 0), 
	gsSP1Triangle(6, 2, 0, 0), 
	gsSP1Triangle(6, 12, 2, 0), 
	gsSP1Triangle(6, 5, 12, 0), 
	gsSP1Triangle(1, 7, 3, 0), 
	gsSPVertex(nintendo_logo_v + 206, 1, 0),
	gsSPVertex(nintendo_logo_v + 209, 1, 1),
	gsSPVertex(nintendo_logo_v + 213, 1, 2),
	gsSPVertex(nintendo_logo_v + 286, 1, 3),
	gsSPVertex(nintendo_logo_v + 303, 1, 4),
	gsSPVertex(nintendo_logo_v + 445, 3, 5),
	gsSPVertex(nintendo_logo_v + 647, 2, 8),
	gsSPVertex(nintendo_logo_v + 658, 2, 10),
	gsSPVertex(nintendo_logo_v + 706, 1, 12),
	gsSP1Triangle(6, 11, 9, 0),
	gsSP1Triangle(3, 4, 12, 0),
	gsSP1Triangle(0, 7, 6, 0), 
	gsSP1Triangle(0, 6, 8, 0), 
	gsSP1Triangle(0, 8, 5, 0), 
	gsSP1Triangle(0, 5, 1, 0), 
	gsSP1Triangle(6, 9, 8, 0), 
	gsSP1Triangle(7, 2, 6, 0), 
	gsSP1Triangle(6, 10, 11, 0), 
	gsSPVertex(nintendo_logo_v + 158, 2, 0),
	gsSPVertex(nintendo_logo_v + 169, 1, 2),
	gsSPVertex(nintendo_logo_v + 211, 1, 3),
	gsSPVertex(nintendo_logo_v + 213, 1, 4),
	gsSPVertex(nintendo_logo_v + 447, 1, 5),
	gsSPVertex(nintendo_logo_v + 449, 3, 6),
	gsSPVertex(nintendo_logo_v + 594, 1, 9),
	gsSPVertex(nintendo_logo_v + 600, 3, 10),
	gsSPVertex(nintendo_logo_v + 657, 1, 13),
	gsSP1Triangle(5, 3, 13, 0),
	gsSP1Triangle(5, 13, 4, 0), 
	gsSP1Triangle(6, 1, 10, 0), 
	gsSP1Triangle(6, 10, 11, 0), 
	gsSP1Triangle(6, 11, 12, 0), 
	gsSP1Triangle(6, 12, 8, 0), 
	gsSP1Triangle(6, 9, 2, 0), 
	gsSP1Triangle(6, 7, 9, 0), 
	gsSP1Triangle(2, 0, 6, 0), 
	gsSP1Triangle(6, 8, 7, 0), 
	gsSPVertex(nintendo_logo_v + 144, 1, 0),
	gsSPVertex(nintendo_logo_v + 163, 1, 1),
	gsSPVertex(nintendo_logo_v + 166, 1, 2),
	gsSPVertex(nintendo_logo_v + 450, 2, 3),
	gsSPVertex(nintendo_logo_v + 589, 1, 5),
	gsSPVertex(nintendo_logo_v + 594, 2, 6),
	gsSPVertex(nintendo_logo_v + 604, 7, 8),
	gsSP1Triangle(0, 6, 7, 0),
	gsSP1Triangle(3, 7, 6, 0), 
	gsSP1Triangle(3, 0, 7, 0), 
	gsSP1Triangle(4, 5, 3, 0), 
	gsSP1Triangle(4, 9, 10, 0), 
	gsSP1Triangle(4, 10, 11, 0), 
	gsSP1Triangle(4, 11, 12, 0), 
	gsSP1Triangle(4, 12, 13, 0), 
	gsSP1Triangle(4, 13, 2, 0), 
	gsSP1Triangle(4, 1, 9, 0), 
	gsSP1Triangle(4, 8, 1, 0), 
	gsSP1Triangle(4, 2, 14, 0), 
	gsSPVertex(nintendo_logo_v + 451, 1, 0),
	gsSPVertex(nintendo_logo_v + 453, 1, 1),
	gsSPVertex(nintendo_logo_v + 455, 1, 2),
	gsSPVertex(nintendo_logo_v + 589, 1, 3),
	gsSPVertex(nintendo_logo_v + 610, 4, 4),
	gsSPVertex(nintendo_logo_v + 625, 1, 8),
	gsSPVertex(nintendo_logo_v + 630, 5, 9),
	gsSPVertex(nintendo_logo_v + 643, 1, 14),
	gsSP1Triangle(0, 5, 3, 0),
	gsSP1Triangle(0, 4, 5, 0), 
	gsSP1Triangle(1, 10, 11, 0), 
	gsSP1Triangle(1, 11, 12, 0), 
	gsSP1Triangle(1, 12, 13, 0), 
	gsSP1Triangle(1, 13, 14, 0), 
	gsSP1Triangle(1, 14, 2, 0), 
	gsSP1Triangle(1, 9, 10, 0), 
	gsSP1Triangle(1, 7, 6, 0), 
	gsSP1Triangle(1, 6, 8, 0), 
	gsSPVertex(nintendo_logo_v + 192, 1, 0),
	gsSPVertex(nintendo_logo_v + 201, 1, 1),
	gsSPVertex(nintendo_logo_v + 453, 4, 2),
	gsSPVertex(nintendo_logo_v + 618, 1, 6),
	gsSPVertex(nintendo_logo_v + 625, 2, 7),
	gsSPVertex(nintendo_logo_v + 628, 3, 9),
	gsSPVertex(nintendo_logo_v + 642, 1, 12),
	gsSPVertex(nintendo_logo_v + 645, 1, 13),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(4, 3, 2, 0), 
	gsSP1Triangle(5, 10, 11, 0), 
	gsSP1Triangle(2, 5, 11, 0), 
	gsSP1Triangle(2, 7, 5, 0), 
	gsSP1Triangle(5, 9, 10, 0), 
	gsSP1Triangle(5, 8, 9, 0), 
	gsSP1Triangle(5, 1, 13, 0), 
	gsSP1Triangle(5, 13, 12, 0), 
	gsSP1Triangle(5, 12, 6, 0), 
	gsSPVertex(nintendo_logo_v + 180, 1, 0),
	gsSPVertex(nintendo_logo_v + 192, 2, 1),
	gsSPVertex(nintendo_logo_v + 195, 1, 3),
	gsSPVertex(nintendo_logo_v + 453, 2, 4),
	gsSPVertex(nintendo_logo_v + 456, 1, 6),
	gsSPVertex(nintendo_logo_v + 613, 1, 7),
	gsSPVertex(nintendo_logo_v + 617, 2, 8),
	gsSPVertex(nintendo_logo_v + 624, 1, 10),
	gsSPVertex(nintendo_logo_v + 626, 2, 11),
	gsSPVertex(nintendo_logo_v + 646, 1, 13),
	gsSP1Triangle(1, 13, 5, 0),
	gsSP1Triangle(5, 3, 0, 0), 
	gsSP1Triangle(5, 0, 4, 0), 
	gsSP1Triangle(1, 2, 13, 0), 
	gsSP1Triangle(6, 12, 11, 0), 
	gsSP1Triangle(6, 8, 12, 0), 
	gsSP1Triangle(6, 9, 8, 0), 
	gsSP1Triangle(4, 10, 7, 0), 
	gsSPVertex(nintendo_logo_v + 192, 2, 0),
	gsSPVertex(nintendo_logo_v + 196, 1, 2),
	gsSPVertex(nintendo_logo_v + 236, 1, 3),
	gsSPVertex(nintendo_logo_v + 241, 1, 4),
	gsSPVertex(nintendo_logo_v + 266, 2, 5),
	gsSPVertex(nintendo_logo_v + 453, 1, 7),
	gsSPVertex(nintendo_logo_v + 457, 2, 8),
	gsSPVertex(nintendo_logo_v + 623, 2, 10),
	gsSPVertex(nintendo_logo_v + 644, 1, 12),
	gsSP1Triangle(4, 8, 5, 0),
	gsSP1Triangle(7, 10, 11, 0), 
	gsSP1Triangle(7, 2, 10, 0), 
	gsSP1Triangle(0, 12, 1, 0), 
	gsSP1Triangle(8, 6, 3, 0), 
	gsSP1Triangle(9, 5, 8, 0), 
	gsSPVertex(nintendo_logo_v + 225, 2, 0),
	gsSPVertex(nintendo_logo_v + 229, 1, 2),
	gsSPVertex(nintendo_logo_v + 236, 2, 3),
	gsSPVertex(nintendo_logo_v + 246, 4, 5),
	gsSPVertex(nintendo_logo_v + 266, 2, 9),
	gsSPVertex(nintendo_logo_v + 458, 1, 11),
	gsSPVertex(nintendo_logo_v + 460, 1, 12),
	gsSPVertex(nintendo_logo_v + 674, 1, 13),
	gsSP1Triangle(2, 1, 13, 0),
	gsSP1Triangle(11, 4, 9, 0),
	gsSP1Triangle(10, 13, 3, 0), 
	gsSP1Triangle(8, 12, 9, 0), 
	gsSP1Triangle(7, 8, 9, 0), 
	gsSP1Triangle(6, 7, 9, 0), 
	gsSP1Triangle(5, 6, 9, 0), 
	gsSP1Triangle(4, 5, 9, 0), 
	gsSP1Triangle(1, 0, 13, 0), 
	gsSPVertex(nintendo_logo_v + 224, 2, 0),
	gsSPVertex(nintendo_logo_v + 249, 1, 2),
	gsSPVertex(nintendo_logo_v + 252, 1, 3),
	gsSPVertex(nintendo_logo_v + 255, 4, 4),
	gsSPVertex(nintendo_logo_v + 264, 1, 8),
	gsSPVertex(nintendo_logo_v + 273, 1, 9),
	gsSPVertex(nintendo_logo_v + 459, 2, 10),
	gsSPVertex(nintendo_logo_v + 672, 1, 12),
	gsSPVertex(nintendo_logo_v + 674, 1, 13),
	gsSPVertex(nintendo_logo_v + 698, 1, 14),
	gsSP1Triangle(2, 4, 11, 0),
	gsSP1Triangle(5, 6, 11, 0), 
	gsSP1Triangle(4, 5, 11, 0), 
	gsSP1Triangle(6, 3, 11, 0), 
	gsSP1Triangle(6, 7, 3, 0), 
	gsSP1Triangle(1, 0, 12, 0), 
	gsSP1Triangle(1, 12, 13, 0), 
	gsSP1Triangle(9, 10, 3, 0), 
	gsSP1Triangle(10, 8, 3, 0), 
	gsSP1Triangle(3, 14, 11, 0), 
	gsSPVertex(nintendo_logo_v + 227, 1, 0),
	gsSPVertex(nintendo_logo_v + 230, 3, 1),
	gsSPVertex(nintendo_logo_v + 234, 2, 4),
	gsSPVertex(nintendo_logo_v + 252, 1, 6),
	gsSPVertex(nintendo_logo_v + 258, 4, 7),
	gsSPVertex(nintendo_logo_v + 272, 1, 11),
	gsSPVertex(nintendo_logo_v + 660, 1, 12),
	gsSPVertex(nintendo_logo_v + 672, 2, 13),
	gsSP1Triangle(7, 8, 6, 0),
	gsSP1Triangle(0, 14, 13, 0), 
	gsSP1Triangle(2, 0, 13, 0), 
	gsSP1Triangle(8, 9, 6, 0), 
	gsSP1Triangle(1, 2, 13, 0), 
	gsSP1Triangle(9, 10, 6, 0), 
	gsSP1Triangle(2, 3, 0, 0), 
	gsSP1Triangle(10, 11, 6, 0), 
	gsSP1Triangle(0, 12, 14, 0), 
	gsSP1Triangle(4, 5, 0, 0), 
	gsSPVertex(nintendo_logo_v + 232, 3, 1),
	gsSPVertex(nintendo_logo_v + 252, 1, 4),
	gsSPVertex(nintendo_logo_v + 262, 3, 5),
	gsSPVertex(nintendo_logo_v + 272, 2, 8),
	gsSPVertex(nintendo_logo_v + 459, 1, 10),
	gsSPVertex(nintendo_logo_v + 701, 2, 11),
	gsSP1Triangle(10, 6, 7, 0),
	gsSP1Triangle(8, 9, 4, 0),
	gsSP1Triangle(2, 3, 0, 0), 
	gsSP1Triangle(1, 2, 0, 0), 
	gsSP1Triangle(10, 5, 12, 0), 
	gsSP1Triangle(10, 12, 11, 0), 
	gsSP1Triangle(10, 11, 6, 0), 
	gsSPVertex(nintendo_logo_v + 240, 1, 0),
	gsSPVertex(nintendo_logo_v + 267, 1, 1),
	gsSPVertex(nintendo_logo_v + 346, 1, 2),
	gsSPVertex(nintendo_logo_v + 352, 1, 3),
	gsSPVertex(nintendo_logo_v + 355, 1, 4),
	gsSPVertex(nintendo_logo_v + 457, 1, 5),
	gsSPVertex(nintendo_logo_v + 463, 4, 6),
	gsSPVertex(nintendo_logo_v + 468, 1, 10),
	gsSPVertex(nintendo_logo_v + 768, 1, 11),
	gsSPVertex(nintendo_logo_v + 772, 3, 12),
	gsSP1Triangle(5, 0, 1, 0),
	gsSP1Triangle(6, 3, 2, 0), 
	gsSP1Triangle(7, 9, 2, 0), 
	gsSP1Triangle(2, 12, 8, 0), 
	gsSP1Triangle(8, 7, 2, 0), 
	gsSP1Triangle(2, 10, 11, 0), 
	gsSP1Triangle(2, 11, 13, 0), 
	gsSP1Triangle(2, 13, 12, 0), 
	gsSP1Triangle(2, 14, 10, 0), 
	gsSP1Triangle(2, 4, 14, 0), 
	gsSPVertex(nintendo_logo_v + 324, 1, 0),
	gsSPVertex(nintendo_logo_v + 334, 1, 1),
	gsSPVertex(nintendo_logo_v + 360, 1, 2),
	gsSPVertex(nintendo_logo_v + 468, 2, 3),
	gsSPVertex(nintendo_logo_v + 751, 2, 5),
	gsSPVertex(nintendo_logo_v + 754, 3, 7),
	gsSPVertex(nintendo_logo_v + 758, 1, 10),
	gsSPVertex(nintendo_logo_v + 761, 3, 11),
	gsSPVertex(nintendo_logo_v + 768, 1, 14),
	gsSP1Triangle(3, 13, 14, 0),
	gsSP1Triangle(3, 4, 1, 0), 
	gsSP1Triangle(3, 1, 10, 0), 
	gsSP1Triangle(3, 10, 5, 0), 
	gsSP1Triangle(3, 5, 6, 0), 
	gsSP1Triangle(3, 6, 11, 0), 
	gsSP1Triangle(3, 9, 4, 0), 
	gsSP1Triangle(3, 2, 7, 0), 
	gsSP1Triangle(3, 7, 8, 0), 
	gsSP1Triangle(3, 8, 9, 0), 
	gsSP1Triangle(3, 11, 12, 0), 
	gsSP1Triangle(3, 12, 13, 0), 
	gsSPVertex(nintendo_logo_v + 311, 2, 0),
	gsSPVertex(nintendo_logo_v + 346, 1, 2),
	gsSPVertex(nintendo_logo_v + 358, 1, 3),
	gsSPVertex(nintendo_logo_v + 360, 1, 4),
	gsSPVertex(nintendo_logo_v + 466, 3, 5),
	gsSPVertex(nintendo_logo_v + 470, 2, 8),
	gsSPVertex(nintendo_logo_v + 739, 2, 10),
	gsSPVertex(nintendo_logo_v + 744, 1, 12),
	gsSPVertex(nintendo_logo_v + 750, 1, 13),
	gsSPVertex(nintendo_logo_v + 754, 1, 14),
	gsSP1Triangle(1, 8, 0, 0),
	gsSP1Triangle(1, 9, 8, 0), 
	gsSP1Triangle(4, 13, 14, 0), 
	gsSP1Triangle(4, 12, 13, 0), 
	gsSP1Triangle(7, 3, 4, 0), 
	gsSP1Triangle(4, 8, 12, 0), 
	gsSP1Triangle(5, 6, 2, 0), 
	gsSP1Triangle(8, 10, 12, 0), 
	gsSPVertex(nintendo_logo_v + 317, 1, 0),
	gsSPVertex(nintendo_logo_v + 340, 1, 1),
	gsSPVertex(nintendo_logo_v + 346, 1, 2),
	gsSPVertex(nintendo_logo_v + 350, 1, 3),
	gsSPVertex(nintendo_logo_v + 463, 1, 4),
	gsSPVertex(nintendo_logo_v + 467, 1, 5),
	gsSPVertex(nintendo_logo_v + 470, 1, 6),
	gsSPVertex(nintendo_logo_v + 739, 5, 7),
	gsSPVertex(nintendo_logo_v + 757, 1, 12),
	gsSPVertex(nintendo_logo_v + 776, 2, 13),
	gsSP1Triangle(6, 8, 9, 0),
	gsSP1Triangle(6, 9, 7, 0), 
	gsSP1Triangle(6, 0, 8, 0), 
	gsSP1Triangle(6, 3, 10, 0), 
	gsSP1Triangle(6, 10, 0, 0), 
	gsSP1Triangle(5, 4, 2, 0), 
	gsSP1Triangle(3, 11, 10, 0), 
	gsSP1Triangle(4, 3, 14, 0), 
	gsSP1Triangle(3, 13, 1, 0), 
	gsSP1Triangle(3, 1, 12, 0), 
	gsSPVertex(nintendo_logo_v + 323, 1, 0),
	gsSPVertex(nintendo_logo_v + 350, 1, 1),
	gsSPVertex(nintendo_logo_v + 352, 1, 2),
	gsSPVertex(nintendo_logo_v + 358, 1, 3),
	gsSPVertex(nintendo_logo_v + 360, 1, 4),
	gsSPVertex(nintendo_logo_v + 463, 1, 5),
	gsSPVertex(nintendo_logo_v + 468, 1, 6),
	gsSPVertex(nintendo_logo_v + 470, 2, 7),
	gsSPVertex(nintendo_logo_v + 734, 1, 9),
	gsSPVertex(nintendo_logo_v + 769, 3, 10),
	gsSPVertex(nintendo_logo_v + 777, 1, 13),
	gsSP1Triangle(6, 0, 3, 0),
	gsSP1Triangle(8, 12, 1, 0),
	gsSP1Triangle(7, 8, 1, 0), 
	gsSP1Triangle(5, 13, 10, 0), 
	gsSP1Triangle(5, 10, 11, 0), 
	gsSP1Triangle(5, 11, 2, 0), 
	gsSP1Triangle(4, 9, 7, 0), 
	gsSPVertex(nintendo_logo_v + 324, 2, 1),
	gsSPVertex(nintendo_logo_v + 340, 1, 3),
	gsSPVertex(nintendo_logo_v + 346, 2, 4),
	gsSPVertex(nintendo_logo_v + 350, 1, 6),
	gsSPVertex(nintendo_logo_v + 355, 1, 7),
	gsSPVertex(nintendo_logo_v + 468, 1, 8),
	gsSPVertex(nintendo_logo_v + 743, 1, 9),
	gsSPVertex(nintendo_logo_v + 745, 1, 10),
	gsSPVertex(nintendo_logo_v + 766, 1, 11),
	gsSPVertex(nintendo_logo_v + 775, 2, 12),
	gsSP1Triangle(6, 2, 9, 0),
	gsSP1Triangle(8, 10, 0, 0), 
	gsSP1Triangle(8, 1, 10, 0), 
	gsSP1Triangle(4, 12, 7, 0), 
	gsSP1Triangle(4, 11, 12, 0), 
	gsSP1Triangle(5, 3, 13, 0), 
	gsSPVertex(nintendo_logo_v + 91, 1, 0),
	gsSPVertex(nintendo_logo_v + 101, 1, 1),
	gsSPVertex(nintendo_logo_v + 110, 2, 2),
	gsSPVertex(nintendo_logo_v + 130, 3, 4),
	gsSPVertex(nintendo_logo_v + 325, 1, 7),
	gsSPVertex(nintendo_logo_v + 350, 1, 8),
	gsSPVertex(nintendo_logo_v + 472, 2, 9),
	gsSPVertex(nintendo_logo_v + 544, 1, 11),
	gsSPVertex(nintendo_logo_v + 558, 2, 12),
	gsSPVertex(nintendo_logo_v + 757, 1, 14),
	gsSP1Triangle(9, 5, 6, 0),
	gsSP1Triangle(8, 14, 7, 0),
	gsSP1Triangle(9, 12, 2, 0), 
	gsSP1Triangle(9, 0, 11, 0), 
	gsSP1Triangle(10, 0, 9, 0), 
	gsSP1Triangle(9, 13, 12, 0), 
	gsSP1Triangle(3, 1, 9, 0), 
	gsSP1Triangle(9, 2, 4, 0), 
	gsSP1Triangle(9, 4, 5, 0), 
	gsSPVertex(nintendo_logo_v + 99, 1, 0),
	gsSPVertex(nintendo_logo_v + 110, 2, 1),
	gsSPVertex(nintendo_logo_v + 117, 3, 3),
	gsSPVertex(nintendo_logo_v + 129, 2, 6),
	gsSPVertex(nintendo_logo_v + 132, 2, 8),
	gsSPVertex(nintendo_logo_v + 472, 1, 10),
	gsSPVertex(nintendo_logo_v + 475, 1, 11),
	gsSPVertex(nintendo_logo_v + 577, 1, 12),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(10, 9, 2, 0), 
	gsSP1Triangle(1, 6, 7, 0), 
	gsSP1Triangle(1, 0, 11, 0), 
	gsSP1Triangle(1, 12, 3, 0), 
	gsSP1Triangle(1, 3, 4, 0), 
	gsSP1Triangle(1, 4, 5, 0), 
	gsSP1Triangle(1, 11, 12, 0), 
	gsSPVertex(nintendo_logo_v + 89, 1, 0),
	gsSPVertex(nintendo_logo_v + 100, 2, 1),
	gsSPVertex(nintendo_logo_v + 107, 1, 3),
	gsSPVertex(nintendo_logo_v + 110, 1, 4),
	gsSPVertex(nintendo_logo_v + 113, 1, 5),
	gsSPVertex(nintendo_logo_v + 116, 1, 6),
	gsSPVertex(nintendo_logo_v + 119, 1, 7),
	gsSPVertex(nintendo_logo_v + 128, 2, 8),
	gsSPVertex(nintendo_logo_v + 472, 1, 10),
	gsSPVertex(nintendo_logo_v + 474, 2, 11),
	gsSPVertex(nintendo_logo_v + 543, 1, 13),
	gsSPVertex(nintendo_logo_v + 565, 1, 14),
	gsSP1Triangle(2, 0, 10, 0),
	gsSP1Triangle(4, 8, 9, 0), 
	gsSP1Triangle(4, 7, 8, 0), 
	gsSP1Triangle(12, 1, 13, 0), 
	gsSP1Triangle(12, 13, 11, 0), 
	gsSP1Triangle(12, 3, 14, 0), 
	gsSP1Triangle(12, 14, 5, 0), 
	gsSP1Triangle(12, 5, 6, 0), 
	gsSPVertex(nintendo_logo_v + 96, 2, 1),
	gsSPVertex(nintendo_logo_v + 102, 6, 3),
	gsSPVertex(nintendo_logo_v + 472, 4, 9),
	gsSP1Triangle(11, 1, 2, 0),
	gsSP1Triangle(12, 7, 8, 0),
	gsSP1Triangle(12, 11, 2, 0), 
	gsSP1Triangle(0, 10, 9, 0), 
	gsSP1Triangle(12, 6, 7, 0), 
	gsSP1Triangle(12, 5, 6, 0), 
	gsSP1Triangle(12, 4, 5, 0), 
	gsSP1Triangle(12, 3, 4, 0), 
	gsSP1Triangle(12, 2, 3, 0), 
	gsSPVertex(nintendo_logo_v + 88, 1, 0),
	gsSPVertex(nintendo_logo_v + 91, 6, 1),
	gsSPVertex(nintendo_logo_v + 125, 2, 7),
	gsSPVertex(nintendo_logo_v + 472, 3, 9),
	gsSPVertex(nintendo_logo_v + 544, 1, 12),
	gsSP1Triangle(11, 7, 9, 0),
	gsSP1Triangle(11, 2, 3, 0),
	gsSP1Triangle(11, 3, 4, 0), 
	gsSP1Triangle(11, 4, 5, 0), 
	gsSP1Triangle(11, 5, 6, 0), 
	gsSP1Triangle(11, 12, 2, 0), 
	gsSP1Triangle(10, 0, 8, 0), 
	gsSP1Triangle(10, 8, 1, 0), 
	gsSP1Triangle(11, 9, 12, 0), 
	gsSPVertex(nintendo_logo_v + 54, 1, 0),
	gsSPVertex(nintendo_logo_v + 63, 1, 1),
	gsSPVertex(nintendo_logo_v + 66, 2, 2),
	gsSPVertex(nintendo_logo_v + 476, 6, 4),
	gsSPVertex(nintendo_logo_v + 528, 2, 10),
	gsSPVertex(nintendo_logo_v + 533, 1, 12),
	gsSP1Triangle(4, 5, 0, 0),
	gsSP1Triangle(0, 9, 10, 0), 
	gsSP1Triangle(5, 7, 0, 0), 
	gsSP1Triangle(0, 11, 4, 0), 
	gsSP1Triangle(6, 8, 0, 0), 
	gsSP1Triangle(7, 6, 0, 0), 
	gsSP1Triangle(0, 2, 3, 0), 
	gsSP1Triangle(0, 3, 9, 0), 
	gsSP1Triangle(0, 12, 2, 0), 
	gsSP1Triangle(8, 1, 0, 0), 
	gsSPVertex(nintendo_logo_v + 35, 1, 0),
	gsSPVertex(nintendo_logo_v + 41, 1, 1),
	gsSPVertex(nintendo_logo_v + 44, 1, 2),
	gsSPVertex(nintendo_logo_v + 49, 1, 3),
	gsSPVertex(nintendo_logo_v + 69, 2, 4),
	gsSPVertex(nintendo_logo_v + 481, 1, 6),
	gsSPVertex(nintendo_logo_v + 514, 1, 7),
	gsSPVertex(nintendo_logo_v + 523, 6, 8),
	gsSP1Triangle(6, 5, 0, 0),
	gsSP1Triangle(6, 10, 13, 0),
	gsSP1Triangle(6, 3, 10, 0), 
	gsSP1Triangle(6, 9, 3, 0), 
	gsSP1Triangle(6, 0, 7, 0), 
	gsSP1Triangle(6, 1, 8, 0), 
	gsSP1Triangle(6, 8, 9, 0), 
	gsSP1Triangle(6, 2, 11, 0), 
	gsSP1Triangle(6, 11, 12, 0), 
	gsSP1Triangle(6, 12, 4, 0), 
	gsSP1Triangle(6, 4, 5, 0), 
	gsSPVertex(nintendo_logo_v + 37, 1, 1),
	gsSPVertex(nintendo_logo_v + 71, 1, 2),
	gsSPVertex(nintendo_logo_v + 482, 1, 3),
	gsSPVertex(nintendo_logo_v + 508, 1, 4),
	gsSPVertex(nintendo_logo_v + 512, 8, 5),
	gsSP1Triangle(0, 12, 4, 0),
	gsSP1Triangle(0, 8, 7, 0),
	gsSP1Triangle(0, 6, 1, 0), 
	gsSP1Triangle(0, 1, 9, 0), 
	gsSP1Triangle(0, 9, 10, 0), 
	gsSP1Triangle(0, 10, 8, 0), 
	gsSP1Triangle(0, 3, 5, 0), 
	gsSP1Triangle(0, 2, 11, 0), 
	gsSP1Triangle(0, 11, 12, 0), 
	gsSPVertex(nintendo_logo_v + 3, 2, 0),
	gsSPVertex(nintendo_logo_v + 19, 1, 2),
	gsSPVertex(nintendo_logo_v + 72, 3, 3),
	gsSPVertex(nintendo_logo_v + 482, 1, 6),
	gsSPVertex(nintendo_logo_v + 498, 3, 7),
	gsSPVertex(nintendo_logo_v + 510, 3, 10),
	gsSP1Triangle(6, 1, 0, 0),
	gsSP1Triangle(6, 10, 12, 0),
	gsSP1Triangle(6, 0, 2, 0), 
	gsSP1Triangle(6, 2, 7, 0), 
	gsSP1Triangle(6, 7, 8, 0), 
	gsSP1Triangle(6, 8, 9, 0), 
	gsSP1Triangle(6, 9, 11, 0), 
	gsSP1Triangle(6, 11, 10, 0), 
	gsSP1Triangle(6, 3, 4, 0), 
	gsSP1Triangle(6, 4, 5, 0), 
	gsSP1Triangle(6, 5, 1, 0), 
	gsSPVertex(nintendo_logo_v + 2, 2, 0),
	gsSPVertex(nintendo_logo_v + 18, 3, 2),
	gsSPVertex(nintendo_logo_v + 34, 1, 5),
	gsSPVertex(nintendo_logo_v + 36, 1, 6),
	gsSPVertex(nintendo_logo_v + 45, 1, 7),
	gsSPVertex(nintendo_logo_v + 75, 2, 8),
	gsSPVertex(nintendo_logo_v + 483, 3, 10),
	gsSP1Triangle(1, 0, 8, 0),
	gsSP1Triangle(1, 2, 3, 0),
	gsSP1Triangle(1, 5, 4, 0), 
	gsSP1Triangle(1, 4, 2, 0), 
	gsSP1Triangle(1, 6, 5, 0), 
	gsSP1Triangle(1, 9, 10, 0), 
	gsSP1Triangle(1, 10, 11, 0), 
	gsSP1Triangle(1, 11, 12, 0), 
	gsSP1Triangle(1, 12, 7, 0), 
	gsSP1Triangle(1, 7, 6, 0), 
	gsSP1Triangle(1, 8, 9, 0), 
	gsSPVertex(nintendo_logo_v + 35, 1, 0),
	gsSPVertex(nintendo_logo_v + 45, 2, 1),
	gsSPVertex(nintendo_logo_v + 54, 2, 3),
	gsSPVertex(nintendo_logo_v + 63, 1, 5),
	gsSPVertex(nintendo_logo_v + 480, 1, 6),
	gsSPVertex(nintendo_logo_v + 482, 1, 7),
	gsSPVertex(nintendo_logo_v + 485, 1, 8),
	gsSPVertex(nintendo_logo_v + 508, 2, 9),
	gsSPVertex(nintendo_logo_v + 532, 2, 11),
	gsSP1Triangle(3, 11, 12, 0),
	gsSP1Triangle(6, 4, 8, 0),
	gsSP1Triangle(6, 8, 5, 0), 
	gsSP1Triangle(8, 2, 1, 0), 
	gsSP1Triangle(8, 4, 2, 0), 
	gsSP1Triangle(0, 9, 10, 0), 
	gsSP1Triangle(0, 10, 7, 0), 
	gsSPVertex(nintendo_logo_v + 395, 1, 0),
	gsSPVertex(nintendo_logo_v + 402, 1, 1),
	gsSPVertex(nintendo_logo_v + 405, 1, 2),
	gsSPVertex(nintendo_logo_v + 412, 1, 3),
	gsSPVertex(nintendo_logo_v + 486, 3, 4),
	gsSPVertex(nintendo_logo_v + 490, 2, 7),
	gsSPVertex(nintendo_logo_v + 790, 2, 9),
	gsSPVertex(nintendo_logo_v + 796, 2, 11),
	gsSP1Triangle(4, 3, 10, 0),
	gsSP1Triangle(4, 10, 6, 0), 
	gsSP1Triangle(4, 6, 12, 0), 
	gsSP1Triangle(4, 12, 11, 0), 
	gsSP1Triangle(4, 11, 1, 0), 
	gsSP1Triangle(4, 1, 5, 0), 
	gsSP1Triangle(5, 2, 4, 0), 
	gsSP1Triangle(5, 7, 2, 0), 
	gsSP1Triangle(6, 0, 12, 0), 
	gsSP1Triangle(6, 8, 9, 0), 
	gsSPVertex(nintendo_logo_v + 385, 1, 0),
	gsSPVertex(nintendo_logo_v + 388, 1, 1),
	gsSPVertex(nintendo_logo_v + 393, 1, 2),
	gsSPVertex(nintendo_logo_v + 395, 1, 3),
	gsSPVertex(nintendo_logo_v + 405, 1, 4),
	gsSPVertex(nintendo_logo_v + 409, 1, 5),
	gsSPVertex(nintendo_logo_v + 488, 4, 6),
	gsSPVertex(nintendo_logo_v + 782, 2, 10),
	gsSPVertex(nintendo_logo_v + 789, 2, 12),
	gsSPVertex(nintendo_logo_v + 802, 1, 14),
	gsSP1Triangle(9, 11, 0, 0),
	gsSP1Triangle(2, 12, 13, 0),
	gsSP1Triangle(7, 14, 4, 0), 
	gsSP1Triangle(5, 7, 4, 0), 
	gsSP1Triangle(8, 5, 4, 0), 
	gsSP1Triangle(6, 12, 3, 0), 
	gsSP1Triangle(6, 13, 12, 0), 
	gsSP1Triangle(0, 2, 13, 0), 
	gsSP1Triangle(9, 0, 13, 0), 
	gsSP1Triangle(9, 1, 10, 0), 
	gsSP1Triangle(9, 10, 11, 0), 
	gsSPVertex(nintendo_logo_v + 377, 1, 0),
	gsSPVertex(nintendo_logo_v + 380, 1, 1),
	gsSPVertex(nintendo_logo_v + 382, 1, 2),
	gsSPVertex(nintendo_logo_v + 388, 1, 3),
	gsSPVertex(nintendo_logo_v + 392, 1, 4),
	gsSPVertex(nintendo_logo_v + 399, 1, 5),
	gsSPVertex(nintendo_logo_v + 413, 1, 6),
	gsSPVertex(nintendo_logo_v + 489, 1, 7),
	gsSPVertex(nintendo_logo_v + 491, 2, 8),
	gsSPVertex(nintendo_logo_v + 782, 1, 10),
	gsSPVertex(nintendo_logo_v + 800, 3, 11),
	gsSP1Triangle(3, 0, 10, 0),
	gsSP1Triangle(3, 1, 0, 0), 
	gsSP1Triangle(8, 6, 3, 0), 
	gsSP1Triangle(7, 11, 13, 0), 
	gsSP1Triangle(7, 12, 11, 0), 
	gsSP1Triangle(7, 9, 12, 0), 
	gsSP1Triangle(9, 2, 1, 0), 
	gsSP1Triangle(3, 9, 1, 0), 
	gsSP1Triangle(9, 5, 4, 0), 
	gsSP1Triangle(9, 4, 2, 0), 
	gsSPVertex(nintendo_logo_v + 372, 1, 0),
	gsSPVertex(nintendo_logo_v + 413, 1, 1),
	gsSPVertex(nintendo_logo_v + 424, 1, 2),
	gsSPVertex(nintendo_logo_v + 438, 1, 3),
	gsSPVertex(nintendo_logo_v + 491, 1, 4),
	gsSPVertex(nintendo_logo_v + 493, 4, 5),
	gsSPVertex(nintendo_logo_v + 804, 3, 9),
	gsSPVertex(nintendo_logo_v + 812, 3, 12),
	gsSP1Triangle(5, 14, 13, 0),
	gsSP1Triangle(4, 0, 1, 0),
	gsSP1Triangle(5, 11, 6, 0), 
	gsSP1Triangle(6, 7, 2, 0), 
	gsSP1Triangle(6, 2, 5, 0), 
	gsSP1Triangle(7, 8, 2, 0), 
	gsSP1Triangle(5, 3, 10, 0), 
	gsSP1Triangle(5, 10, 9, 0), 
	gsSP1Triangle(5, 9, 11, 0), 
	gsSP1Triangle(5, 13, 3, 0), 
	gsSP1Triangle(5, 12, 14, 0), 
	gsSPVertex(nintendo_logo_v + 419, 1, 0),
	gsSPVertex(nintendo_logo_v + 424, 1, 1),
	gsSPVertex(nintendo_logo_v + 438, 1, 2),
	gsSPVertex(nintendo_logo_v + 440, 1, 3),
	gsSPVertex(nintendo_logo_v + 496, 2, 4),
	gsSPVertex(nintendo_logo_v + 805, 1, 6),
	gsSPVertex(nintendo_logo_v + 815, 1, 7),
	gsSPVertex(nintendo_logo_v + 817, 1, 8),
	gsSPVertex(nintendo_logo_v + 819, 1, 9),
	gsSP1Triangle(2, 7, 6, 0),
	gsSP1Triangle(2, 9, 3, 0), 
	gsSP1Triangle(2, 3, 5, 0), 
	gsSP1Triangle(2, 5, 0, 0), 
	gsSP1Triangle(2, 0, 7, 0), 
	gsSP1Triangle(4, 8, 1, 0), 
}; /* g1 */ 

/* ======== db ======== */

Gfx intro_seg7_dl_0700B3A0[] = {
	gsSPDisplayList(nintendo_logo_grp_g1),
    gsSPEndDisplayList(),
}; /* db */ // 0x0700B420 - 0x0700B460
static const Vtx intro_seg7_vertex_0700B420[] = {
    {{{    96,     42,     -1}, 0, {     0,    512}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   224,     42,     -1}, 0, {  4096,    512}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   224,     58,     -1}, 0, {  4096,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    96,     58,     -1}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
};

// 0x0700B460 - 0x0700B4A0
static const Vtx intro_seg7_vertex_0700B460[] = {
    {{{   268,    180,     -1}, 0, {     0,    512}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   284,    180,     -1}, 0, {   544,    512}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   284,    196,     -1}, 0, {   544,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   268,    196,     -1}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
};

#if defined(VERSION_EU) || defined(VERSION_SH)
// 0x0700B4A0 - 0x0700B4A2
ALIGNED8 static const Texture intro_seg7_texture_0700B4A0[] = {
#include "levels/intro/2_eu_copyright.rgba16.inc.c"
};

#else
// 0x0700B4A0 - 0x0700B4A2
ALIGNED8 static const Texture intro_seg7_texture_0700B4A0[] = {
#include "levels/intro/2_copyright.rgba16.inc.c"
};
#endif

#if defined(VERSION_EU)
// 0x0700C4A0 - 0x0700D4A0
ALIGNED8 static const u8 intro_seg7_texture_0700C4A0[] = {
#include "levels/intro/3_eu_tm.rgba16.inc.c"
};
#elif defined(VERSION_SH)
ALIGNED8 static const u8 intro_seg7_texture_0700C4A0[] = {
#include "levels/intro/3_sh_tm.rgba16.inc.c"
};
#else
// 0x0700C4A0 - 0x0700D4A0
ALIGNED8 static const Texture intro_seg7_texture_0700C4A0[] = {
#include "levels/intro/3_tm.rgba16.inc.c"
};
#endif

Gfx *nintendo_logo_modelT = NULL;

// 0x0700C6A0 - 0x0700C790
const Gfx intro_seg7_dl_0700C6A0[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALFADE, G_CC_DECALFADE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),

    gsDPLoadTextureBlock(intro_seg7_texture_0700B4A0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 128, 16, 0, G_TX_CLAMP, G_TX_CLAMP, 7, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(intro_seg7_vertex_0700B420, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),

    gsDPLoadTextureBlock(intro_seg7_texture_0700C4A0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_CLAMP, G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(intro_seg7_vertex_0700B460, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),

    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_LIGHTING),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsDPSetEnvColor(255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
    gsSPEndDisplayList(),
};

// 0x0700C790
const f32 intro_seg7_table_0700C790[] = {
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
};

// 0x0700C880
const f32 intro_seg7_table_0700C880[] = {
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
    1.000000f, 1.000000f, 1.000000f, 1.000000f,
};
