/*
 * \file 
 * \author FMSoft
 * \date 
 *
 \verbatim

    This file is part of mGNCS4Touch, one of MiniGUI components.

    Copyright (C) 2008-2018 FMSoft (http://www.fmsoft.cn).

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

    Or,

    As this program is a library, any link to this program must follow
    GNU General Public License version 3 (GPLv3). If you cannot accept
    GPLv3, you need to be licensed from FMSoft.

    If you have got a commercial license of this program, please use it
    under the terms and conditions of the commercial license.

    For more information about the commercial license, please refer to
    <http://www.minigui.com/en/about/licensing-policy/>.

 \endverbatim
*/

#ifndef  MGROUPITEMITERATOR_INC
#define  MGROUPITEMITERATOR_INC

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _mGroupItemIteratorClass mGroupItemIteratorClass;
typedef struct _mGroupItemIterator mGroupItemIterator;

#define mGroupItemIteratorHeader(clss) \
    mItemIteratorHeader(clss) \
    list_t* head; \
    list_t* current;\
    list_t* parent;\
    mListItemIterator* parentIter; \
    mListItemIterator* childIter; \
    char* key;

#define mGroupItemIteratorClassHeader(clss, superCls) \
    mItemIteratorClassHeader(clss, superCls)

struct _mGroupItemIterator
{   
    mGroupItemIteratorHeader(mGroupItemIterator)
};

struct _mGroupItemIteratorClass
{   
    mGroupItemIteratorClassHeader(mGroupItemIterator, mItemIterator)
};

MGNCS_EXPORT extern mGroupItemIteratorClass g_stmGroupItemIteratorCls;

#ifdef __cplusplus
}
#endif

#endif   /* ----- #ifndef MGROUPITEMITERATOR_INC  ----- */

