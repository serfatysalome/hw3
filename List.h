//
//  List.h
//  Hmw3
//
//  Created by Serfaty Salome on 16/12/2016.
//  Copyright © 2016 Serfaty Salome. All rights reserved.
//

#ifndef List_h
#define List_h

#include <stdio.h>
typedef struct List_* PList;
typedef void* PElem;
typedef enum{FAIL, SUCCESS} Result;

/*User functions*/
typedef PElem (*CLONE_FUNC)(PElem);
typedef void (*DESTROY_FUNC)(PElem);

/*Interface functions*/
PList ListCreate(CLONE_FUNC, DESTROY_FUNC);
void ListDestroy(PList);
Result ListAdd(PList, PElem);
PElem ListGetFirst(PList);
PElem ListGetNext(PList);

Result ListRemove(PList);
int ListGetSize(PList);

#endif /* List_h */
