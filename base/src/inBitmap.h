/*
 * The contents of this file are subject to the Netscape Public
 * License Version 1.1 (the "License"); you may not use this file
 * except in compliance with the License. You may obtain a copy of
 * the License at http://www.mozilla.org/NPL/
 *
 * Software distributed under the License is distributed on an "AS
 * IS" basis, WITHOUT WARRANTY OF ANY KIND, either express or
 * implied. See the License for the specific language governing
 * rights and limitations under the License.
 *
 * The Original Code is mozilla.org code.
 *
 * The Initial Developer of the Original Code is Netscape
 * Communications Corporation.  Portions created by Netscape are
 * Copyright (C) 2001 Netscape Communications Corporation. All
 * Rights Reserved.
 *
 * Contributor(s): 
 *   Joe Hewitt <hewitt@netscape.com> (original author)
 */

#ifndef __inBitmap_h__
#define __inBitmap_h__

#include "inIBitmap.h"

class inBitmap : public inIBitmap
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_INIBITMAP

  inBitmap();
  virtual ~inBitmap();

protected:
  PRUint32 mWidth;
  PRUint32 mHeight;
  PRUint8* mBits;  
};

#endif // __inBitmap_h__
