#include "stdafx.h"
#pragma hdrstop
#include "gametype_chooser.h"
#include "xrServer_Objects_Abstract.h"

#ifndef XRGAME_EXPORTS
void  GameTypeChooser::FillProp(LPCSTR pref, PropItemVec& items)
{
	PHelper().CreateGameType		(items, PrepareKey(pref, "Game Type"), this);
}
#endif // #ifndef XRGAME_EXPORTS