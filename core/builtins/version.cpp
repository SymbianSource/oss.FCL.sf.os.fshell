// version.cpp
// 
// Copyright (c) 2008 - 2010 Accenture. All rights reserved.
// This component and the accompanying materials are made available
// under the terms of the "Eclipse Public License v1.0"
// which accompanies this distribution, and is available
// at the URL "http://www.eclipse.org/legal/epl-v10.html".
// 
// Initial Contributors:
// Accenture - Initial contribution
//

#include "version.h"

// Note, this function is generated by "group\genver.pl".
extern void PrintVersionInfo(RIoWriteHandle& aOut, TBool aVerbose);

CCommandBase* CCmdVersion::NewLC()
	{
	CCmdVersion* self = new(ELeave) CCmdVersion();
	CleanupStack::PushL(self);
	self->BaseConstructL();
	return self;
	}

CCmdVersion::~CCmdVersion()
	{
	}

CCmdVersion::CCmdVersion()
	{
	}

const TDesC& CCmdVersion::Name() const
	{
	_LIT(KName, "version");	
	return KName;
	}

void CCmdVersion::DoRunL()
	{
	PrintVersionInfo(Stdout(), iVerbose);
	}

void CCmdVersion::OptionsL(RCommandOptionList& aOptions)
	{
	_LIT(KOptVerbose, "verbose");
	aOptions.AppendBoolL(iVerbose, KOptVerbose);
	}
