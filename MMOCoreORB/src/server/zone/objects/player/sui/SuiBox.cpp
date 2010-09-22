/*
 *	server/zone/objects/player/sui/SuiBox.cpp generated by engine3 IDL compiler 0.60
 */

#include "SuiBox.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

/*
 *	SuiBoxStub
 */

SuiBox::SuiBox(PlayerCreature* play, unsigned int windowtype, unsigned int boxtype) : ManagedObject(DummyConstructorParameter::instance()) {
	_impl = new SuiBoxImplementation(play, windowtype, boxtype);
	_impl->_setStub(this);
}

SuiBox::SuiBox(DummyConstructorParameter* param) : ManagedObject(param) {
}

SuiBox::~SuiBox() {
}


void SuiBox::initialize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->initialize();
}

void SuiBox::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->initializeTransientMembers();
}

void SuiBox::generateHeader(SuiCreatePageMessage* message) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(message);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->generateHeader(message);
}

void SuiBox::generateBody(SuiCreatePageMessage* message) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(message);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->generateBody(message);
}

void SuiBox::generateFooter(SuiCreatePageMessage* message, int type) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(message);
		method.addSignedIntParameter(type);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->generateFooter(message, type);
}

BaseMessage* SuiBox::generateMessage() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		return (BaseMessage*) method.executeWithObjectReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->generateMessage();
}

BaseMessage* SuiBox::generateCloseMessage() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		return (BaseMessage*) method.executeWithObjectReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->generateCloseMessage();
}

void SuiBox::addSetting(const String& optType, const String& variable, const String& setting, const String& value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addAsciiParameter(optType);
		method.addAsciiParameter(variable);
		method.addAsciiParameter(setting);
		method.addAsciiParameter(value);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->addSetting(optType, variable, setting, value);
}

void SuiBox::addHeader(const String& variable, const String& type) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addAsciiParameter(variable);
		method.addAsciiParameter(type);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->addHeader(variable, type);
}

void SuiBox::clearOptions() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->clearOptions();
}

int SuiBox::compareTo(SuiBox* obj) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addObjectParameter(obj);

		return method.executeWithSignedIntReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->compareTo(obj);
}

bool SuiBox::hasGeneratedMessage() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return method.executeWithBooleanReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->hasGeneratedMessage();
}

void SuiBox::setPromptTitle(const String& name) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->setPromptTitle(name);
}

void SuiBox::setPromptText(const String& name) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->setPromptText(name);
}

String SuiBox::getPromptTitle() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		method.executeWithAsciiReturn(_return_getPromptTitle);
		return _return_getPromptTitle;
	} else
		return ((SuiBoxImplementation*) _impl)->getPromptTitle();
}

void SuiBox::setHandlerText(const String& text) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addAsciiParameter(text);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->setHandlerText(text);
}

void SuiBox::setUsingObjectID(unsigned long long oid) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);
		method.addUnsignedLongParameter(oid);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->setUsingObjectID(oid);
}

void SuiBox::setWindowType(unsigned int type) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addUnsignedIntParameter(type);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->setWindowType(type);
}

void SuiBox::setBoxType(int type) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addSignedIntParameter(type);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->setBoxType(type);
}

void SuiBox::setIntValue(int value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->setIntValue(value);
}

bool SuiBox::isInputBox() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);

		return method.executeWithBooleanReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->isInputBox();
}

bool SuiBox::isListBox() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);

		return method.executeWithBooleanReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->isListBox();
}

bool SuiBox::isMessageBox() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);

		return method.executeWithBooleanReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->isMessageBox();
}

bool SuiBox::isTransferBox() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);

		return method.executeWithBooleanReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->isTransferBox();
}

bool SuiBox::isBankTransferBox() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);

		return method.executeWithBooleanReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->isBankTransferBox();
}

bool SuiBox::isSlicingBox() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);

		return method.executeWithBooleanReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->isSlicingBox();
}

bool SuiBox::isCharacterBuilderBox() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		return method.executeWithBooleanReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->isCharacterBuilderBox();
}

bool SuiBox::isColorPicker() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);

		return method.executeWithBooleanReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->isColorPicker();
}

void SuiBox::setCancelButton(bool value, const String& cancelText) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);
		method.addBooleanParameter(value);
		method.addAsciiParameter(cancelText);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->setCancelButton(value, cancelText);
}

void SuiBox::setOtherButton(bool value, const String& backText) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);
		method.addBooleanParameter(value);
		method.addAsciiParameter(backText);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->setOtherButton(value, backText);
}

void SuiBox::setOkButton(bool value, const String& okText) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);
		method.addBooleanParameter(value);
		method.addAsciiParameter(okText);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->setOkButton(value, okText);
}

unsigned long long SuiBox::getUsingObjectID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->getUsingObjectID();
}

int SuiBox::getIntValue() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);

		return method.executeWithSignedIntReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->getIntValue();
}

PlayerCreature* SuiBox::getPlayer() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 39);

		return (PlayerCreature*) method.executeWithObjectReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->getPlayer();
}

unsigned int SuiBox::getBoxID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 40);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->getBoxID();
}

int SuiBox::getWindowType() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 41);

		return method.executeWithSignedIntReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->getWindowType();
}

SceneObject* SuiBox::getUsingObject() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 42);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->getUsingObject();
}

void SuiBox::setUsingObject(SceneObject* object) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 43);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->setUsingObject(object);
}

/*
 *	SuiBoxImplementation
 */

SuiBoxImplementation::SuiBoxImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}

SuiBoxImplementation::~SuiBoxImplementation() {
	SuiBoxImplementation::finalize();
}


void SuiBoxImplementation::_initializeImplementation() {
	_setClassHelper(SuiBoxHelper::instance());

	_serializationHelperMethod();
}

void SuiBoxImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (SuiBox*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* SuiBoxImplementation::_getStub() {
	return _this;
}

SuiBoxImplementation::operator const SuiBox*() {
	return _this;
}

void SuiBoxImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void SuiBoxImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void SuiBoxImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void SuiBoxImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void SuiBoxImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void SuiBoxImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void SuiBoxImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void SuiBoxImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("SuiBox");

	addSerializableVariable("player", &player);
	addSerializableVariable("boxID", &boxID);
	addSerializableVariable("usingObject", &usingObject);
	addSerializableVariable("usingObjectID", &usingObjectID);
	addSerializableVariable("handlerStr", &handlerStr);
	addSerializableVariable("cancelButtonText", &cancelButtonText);
	addSerializableVariable("cancelButton", &cancelButton);
	addSerializableVariable("okButtonText", &okButtonText);
	addSerializableVariable("okButton", &okButton);
	addSerializableVariable("otherButtonText", &otherButtonText);
	addSerializableVariable("otherButton", &otherButton);
	addSerializableVariable("promptTitle", &promptTitle);
	addSerializableVariable("promptText", &promptText);
	addSerializableVariable("boxType", &boxType);
	addSerializableVariable("windowType", &windowType);
	addSerializableVariable("integerValue", &integerValue);
	addSerializableVariable("headerSets", &headerSets);
	addSerializableVariable("optionSets", &optionSets);
	addSerializableVariable("hdrOptCount", &hdrOptCount);
	addSerializableVariable("hasGenerated", &hasGenerated);
}

SuiBoxImplementation::SuiBoxImplementation(PlayerCreature* play, unsigned int windowtype, unsigned int boxtype) {
	_initializeImplementation();
	// server/zone/objects/player/sui/SuiBox.idl(109):  		player = play;
	player = play;
	// server/zone/objects/player/sui/SuiBox.idl(111):  		boxType = boxtype;
	boxType = boxtype;
	// server/zone/objects/player/sui/SuiBox.idl(113):  		windowType = windowtype;
	windowType = windowtype;
	// server/zone/objects/player/sui/SuiBox.idl(115):  		initialize();
	initialize();
}

void SuiBoxImplementation::initialize() {
	// server/zone/objects/player/sui/SuiBox.idl(119):  		Logger.setLoggingName("SuiBox");
	Logger::setLoggingName("SuiBox");
	// server/zone/objects/player/sui/SuiBox.idl(121):  		boxID = player.getNewSuiBoxID(windowType);
	boxID = player->getNewSuiBoxID(windowType);
	// server/zone/objects/player/sui/SuiBox.idl(123):  		handlerStr = "msgSelected";
	handlerStr = "msgSelected";
	// server/zone/objects/player/sui/SuiBox.idl(125):  		cancelButtonText = "@cancel";
	cancelButtonText = "@cancel";
	// server/zone/objects/player/sui/SuiBox.idl(126):  		cancelButton = false;
	cancelButton = false;
	// server/zone/objects/player/sui/SuiBox.idl(128):  		otherButtonText = "@back";
	otherButtonText = "@back";
	// server/zone/objects/player/sui/SuiBox.idl(129):  		otherButton = false;
	otherButton = false;
	// server/zone/objects/player/sui/SuiBox.idl(131):  		okButtonText = "@ok";
	okButtonText = "@ok";
	// server/zone/objects/player/sui/SuiBox.idl(132):  		okButton = true;
	okButton = true;
	// server/zone/objects/player/sui/SuiBox.idl(134):  		hdrOptCount = 0;
	hdrOptCount = 0;
	// server/zone/objects/player/sui/SuiBox.idl(135):  		hasGenerated = false;
	hasGenerated = false;
}

void SuiBoxImplementation::finalize() {
}

void SuiBoxImplementation::initializeTransientMembers() {
	// server/zone/objects/player/sui/SuiBox.idl(143):  		super.initializeTransientMembers();
	ManagedObjectImplementation::initializeTransientMembers();
}

void SuiBoxImplementation::generateFooter(SuiCreatePageMessage* message, int type) {
	// server/zone/objects/player/sui/SuiBox.idl(174):  		message.insertFooter(type);
	message->insertFooter(type);
}

BaseMessage* SuiBoxImplementation::generateMessage() {
	// server/zone/objects/player/sui/SuiBox.idl(178):  		return null;
	return NULL;
}

void SuiBoxImplementation::clearOptions() {
	// server/zone/objects/player/sui/SuiBox.idl(210):  		headerSets.removeAll();
	(&headerSets)->removeAll();
	// server/zone/objects/player/sui/SuiBox.idl(211):  		hdrOptCount = 0;
	hdrOptCount = 0;
	// server/zone/objects/player/sui/SuiBox.idl(212):  		optionSets.removeAll();
	(&optionSets)->removeAll();
}

int SuiBoxImplementation::compareTo(SuiBox* obj) {
	// server/zone/objects/player/sui/SuiBox.idl(216):  		unsigned int id = obj.getBoxID();
	unsigned int id = obj->getBoxID();
	// server/zone/objects/player/sui/SuiBox.idl(218):  
	if (boxID < id)	// server/zone/objects/player/sui/SuiBox.idl(219):  			return 1;
	return 1;

	else 	// server/zone/objects/player/sui/SuiBox.idl(220):  
	if (boxID > id)	// server/zone/objects/player/sui/SuiBox.idl(221):  			return -1;
	return -1;

	else 	// server/zone/objects/player/sui/SuiBox.idl(223):  			return 0;
	return 0;
}

bool SuiBoxImplementation::hasGeneratedMessage() {
	// server/zone/objects/player/sui/SuiBox.idl(227):  		return hasGenerated;
	return hasGenerated;
}

void SuiBoxImplementation::setPromptTitle(const String& name) {
	// server/zone/objects/player/sui/SuiBox.idl(231):  		promptTitle = name;
	promptTitle = name;
}

void SuiBoxImplementation::setPromptText(const String& name) {
	// server/zone/objects/player/sui/SuiBox.idl(235):  		promptText = name;
	promptText = name;
}

String SuiBoxImplementation::getPromptTitle() {
	// server/zone/objects/player/sui/SuiBox.idl(239):  		return promptTitle;
	return promptTitle;
}

void SuiBoxImplementation::setHandlerText(const String& text) {
	// server/zone/objects/player/sui/SuiBox.idl(243):  		handlerStr = text;
	handlerStr = text;
}

void SuiBoxImplementation::setUsingObjectID(unsigned long long oid) {
	// server/zone/objects/player/sui/SuiBox.idl(247):  		usingObjectID = oid;
	usingObjectID = oid;
}

void SuiBoxImplementation::setWindowType(unsigned int type) {
	// server/zone/objects/player/sui/SuiBox.idl(251):  		windowType = type;
	windowType = type;
}

void SuiBoxImplementation::setBoxType(int type) {
	// server/zone/objects/player/sui/SuiBox.idl(255):  		boxType = type;
	boxType = type;
}

void SuiBoxImplementation::setIntValue(int value) {
	// server/zone/objects/player/sui/SuiBox.idl(259):  		integerValue = value;
	integerValue = value;
}

bool SuiBoxImplementation::isInputBox() {
	// server/zone/objects/player/sui/SuiBox.idl(263):  		return false;
	return false;
}

bool SuiBoxImplementation::isListBox() {
	// server/zone/objects/player/sui/SuiBox.idl(267):  		return false;
	return false;
}

bool SuiBoxImplementation::isMessageBox() {
	// server/zone/objects/player/sui/SuiBox.idl(271):  		return false;
	return false;
}

bool SuiBoxImplementation::isTransferBox() {
	// server/zone/objects/player/sui/SuiBox.idl(275):  		return false;
	return false;
}

bool SuiBoxImplementation::isBankTransferBox() {
	// server/zone/objects/player/sui/SuiBox.idl(279):  		return false;
	return false;
}

bool SuiBoxImplementation::isSlicingBox() {
	// server/zone/objects/player/sui/SuiBox.idl(283):  		return false;
	return false;
}

bool SuiBoxImplementation::isCharacterBuilderBox() {
	// server/zone/objects/player/sui/SuiBox.idl(287):  		return false;
	return false;
}

bool SuiBoxImplementation::isColorPicker() {
	// server/zone/objects/player/sui/SuiBox.idl(291):  		return false;
	return false;
}

unsigned long long SuiBoxImplementation::getUsingObjectID() {
	// server/zone/objects/player/sui/SuiBox.idl(301):  		return usingObjectID;
	return usingObjectID;
}

int SuiBoxImplementation::getIntValue() {
	// server/zone/objects/player/sui/SuiBox.idl(305):  		return integerValue;
	return integerValue;
}

PlayerCreature* SuiBoxImplementation::getPlayer() {
	// server/zone/objects/player/sui/SuiBox.idl(309):  		return player;
	return player;
}

unsigned int SuiBoxImplementation::getBoxID() {
	// server/zone/objects/player/sui/SuiBox.idl(313):  		return boxID;
	return boxID;
}

int SuiBoxImplementation::getWindowType() {
	// server/zone/objects/player/sui/SuiBox.idl(317):  		return windowType;
	return windowType;
}

SceneObject* SuiBoxImplementation::getUsingObject() {
	// server/zone/objects/player/sui/SuiBox.idl(321):  		return usingObject;
	return usingObject;
}

void SuiBoxImplementation::setUsingObject(SceneObject* object) {
	// server/zone/objects/player/sui/SuiBox.idl(325):  		usingObject = object;
	usingObject = object;
}

/*
 *	SuiBoxAdapter
 */

SuiBoxAdapter::SuiBoxAdapter(SuiBoxImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* SuiBoxAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initialize();
		break;
	case 7:
		finalize();
		break;
	case 8:
		initializeTransientMembers();
		break;
	case 9:
		generateHeader((SuiCreatePageMessage*) inv->getObjectParameter());
		break;
	case 10:
		generateBody((SuiCreatePageMessage*) inv->getObjectParameter());
		break;
	case 11:
		generateFooter((SuiCreatePageMessage*) inv->getObjectParameter(), inv->getSignedIntParameter());
		break;
	case 12:
		resp->insertLong(generateMessage()->_getObjectID());
		break;
	case 13:
		resp->insertLong(generateCloseMessage()->_getObjectID());
		break;
	case 14:
		addSetting(inv->getAsciiParameter(_param0_addSetting__String_String_String_String_), inv->getAsciiParameter(_param1_addSetting__String_String_String_String_), inv->getAsciiParameter(_param2_addSetting__String_String_String_String_), inv->getAsciiParameter(_param3_addSetting__String_String_String_String_));
		break;
	case 15:
		addHeader(inv->getAsciiParameter(_param0_addHeader__String_String_), inv->getAsciiParameter(_param1_addHeader__String_String_));
		break;
	case 16:
		clearOptions();
		break;
	case 17:
		resp->insertSignedInt(compareTo((SuiBox*) inv->getObjectParameter()));
		break;
	case 18:
		resp->insertBoolean(hasGeneratedMessage());
		break;
	case 19:
		setPromptTitle(inv->getAsciiParameter(_param0_setPromptTitle__String_));
		break;
	case 20:
		setPromptText(inv->getAsciiParameter(_param0_setPromptText__String_));
		break;
	case 21:
		resp->insertAscii(getPromptTitle());
		break;
	case 22:
		setHandlerText(inv->getAsciiParameter(_param0_setHandlerText__String_));
		break;
	case 23:
		setUsingObjectID(inv->getUnsignedLongParameter());
		break;
	case 24:
		setWindowType(inv->getUnsignedIntParameter());
		break;
	case 25:
		setBoxType(inv->getSignedIntParameter());
		break;
	case 26:
		setIntValue(inv->getSignedIntParameter());
		break;
	case 27:
		resp->insertBoolean(isInputBox());
		break;
	case 28:
		resp->insertBoolean(isListBox());
		break;
	case 29:
		resp->insertBoolean(isMessageBox());
		break;
	case 30:
		resp->insertBoolean(isTransferBox());
		break;
	case 31:
		resp->insertBoolean(isBankTransferBox());
		break;
	case 32:
		resp->insertBoolean(isSlicingBox());
		break;
	case 33:
		resp->insertBoolean(isCharacterBuilderBox());
		break;
	case 34:
		resp->insertBoolean(isColorPicker());
		break;
	case 35:
		setCancelButton(inv->getBooleanParameter(), inv->getAsciiParameter(_param1_setCancelButton__bool_String_));
		break;
	case 36:
		setOtherButton(inv->getBooleanParameter(), inv->getAsciiParameter(_param1_setOtherButton__bool_String_));
		break;
	case 37:
		setOkButton(inv->getBooleanParameter(), inv->getAsciiParameter(_param1_setOkButton__bool_String_));
		break;
	case 38:
		resp->insertLong(getUsingObjectID());
		break;
	case 39:
		resp->insertSignedInt(getIntValue());
		break;
	case 40:
		resp->insertLong(getPlayer()->_getObjectID());
		break;
	case 41:
		resp->insertInt(getBoxID());
		break;
	case 42:
		resp->insertSignedInt(getWindowType());
		break;
	case 43:
		resp->insertLong(getUsingObject()->_getObjectID());
		break;
	case 44:
		setUsingObject((SceneObject*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void SuiBoxAdapter::initialize() {
	((SuiBoxImplementation*) impl)->initialize();
}

void SuiBoxAdapter::finalize() {
	((SuiBoxImplementation*) impl)->finalize();
}

void SuiBoxAdapter::initializeTransientMembers() {
	((SuiBoxImplementation*) impl)->initializeTransientMembers();
}

void SuiBoxAdapter::generateHeader(SuiCreatePageMessage* message) {
	((SuiBoxImplementation*) impl)->generateHeader(message);
}

void SuiBoxAdapter::generateBody(SuiCreatePageMessage* message) {
	((SuiBoxImplementation*) impl)->generateBody(message);
}

void SuiBoxAdapter::generateFooter(SuiCreatePageMessage* message, int type) {
	((SuiBoxImplementation*) impl)->generateFooter(message, type);
}

BaseMessage* SuiBoxAdapter::generateMessage() {
	return ((SuiBoxImplementation*) impl)->generateMessage();
}

BaseMessage* SuiBoxAdapter::generateCloseMessage() {
	return ((SuiBoxImplementation*) impl)->generateCloseMessage();
}

void SuiBoxAdapter::addSetting(const String& optType, const String& variable, const String& setting, const String& value) {
	((SuiBoxImplementation*) impl)->addSetting(optType, variable, setting, value);
}

void SuiBoxAdapter::addHeader(const String& variable, const String& type) {
	((SuiBoxImplementation*) impl)->addHeader(variable, type);
}

void SuiBoxAdapter::clearOptions() {
	((SuiBoxImplementation*) impl)->clearOptions();
}

int SuiBoxAdapter::compareTo(SuiBox* obj) {
	return ((SuiBoxImplementation*) impl)->compareTo(obj);
}

bool SuiBoxAdapter::hasGeneratedMessage() {
	return ((SuiBoxImplementation*) impl)->hasGeneratedMessage();
}

void SuiBoxAdapter::setPromptTitle(const String& name) {
	((SuiBoxImplementation*) impl)->setPromptTitle(name);
}

void SuiBoxAdapter::setPromptText(const String& name) {
	((SuiBoxImplementation*) impl)->setPromptText(name);
}

String SuiBoxAdapter::getPromptTitle() {
	return ((SuiBoxImplementation*) impl)->getPromptTitle();
}

void SuiBoxAdapter::setHandlerText(const String& text) {
	((SuiBoxImplementation*) impl)->setHandlerText(text);
}

void SuiBoxAdapter::setUsingObjectID(unsigned long long oid) {
	((SuiBoxImplementation*) impl)->setUsingObjectID(oid);
}

void SuiBoxAdapter::setWindowType(unsigned int type) {
	((SuiBoxImplementation*) impl)->setWindowType(type);
}

void SuiBoxAdapter::setBoxType(int type) {
	((SuiBoxImplementation*) impl)->setBoxType(type);
}

void SuiBoxAdapter::setIntValue(int value) {
	((SuiBoxImplementation*) impl)->setIntValue(value);
}

bool SuiBoxAdapter::isInputBox() {
	return ((SuiBoxImplementation*) impl)->isInputBox();
}

bool SuiBoxAdapter::isListBox() {
	return ((SuiBoxImplementation*) impl)->isListBox();
}

bool SuiBoxAdapter::isMessageBox() {
	return ((SuiBoxImplementation*) impl)->isMessageBox();
}

bool SuiBoxAdapter::isTransferBox() {
	return ((SuiBoxImplementation*) impl)->isTransferBox();
}

bool SuiBoxAdapter::isBankTransferBox() {
	return ((SuiBoxImplementation*) impl)->isBankTransferBox();
}

bool SuiBoxAdapter::isSlicingBox() {
	return ((SuiBoxImplementation*) impl)->isSlicingBox();
}

bool SuiBoxAdapter::isCharacterBuilderBox() {
	return ((SuiBoxImplementation*) impl)->isCharacterBuilderBox();
}

bool SuiBoxAdapter::isColorPicker() {
	return ((SuiBoxImplementation*) impl)->isColorPicker();
}

void SuiBoxAdapter::setCancelButton(bool value, const String& cancelText) {
	((SuiBoxImplementation*) impl)->setCancelButton(value, cancelText);
}

void SuiBoxAdapter::setOtherButton(bool value, const String& backText) {
	((SuiBoxImplementation*) impl)->setOtherButton(value, backText);
}

void SuiBoxAdapter::setOkButton(bool value, const String& okText) {
	((SuiBoxImplementation*) impl)->setOkButton(value, okText);
}

unsigned long long SuiBoxAdapter::getUsingObjectID() {
	return ((SuiBoxImplementation*) impl)->getUsingObjectID();
}

int SuiBoxAdapter::getIntValue() {
	return ((SuiBoxImplementation*) impl)->getIntValue();
}

PlayerCreature* SuiBoxAdapter::getPlayer() {
	return ((SuiBoxImplementation*) impl)->getPlayer();
}

unsigned int SuiBoxAdapter::getBoxID() {
	return ((SuiBoxImplementation*) impl)->getBoxID();
}

int SuiBoxAdapter::getWindowType() {
	return ((SuiBoxImplementation*) impl)->getWindowType();
}

SceneObject* SuiBoxAdapter::getUsingObject() {
	return ((SuiBoxImplementation*) impl)->getUsingObject();
}

void SuiBoxAdapter::setUsingObject(SceneObject* object) {
	((SuiBoxImplementation*) impl)->setUsingObject(object);
}

/*
 *	SuiBoxHelper
 */

SuiBoxHelper* SuiBoxHelper::staticInitializer = SuiBoxHelper::instance();

SuiBoxHelper::SuiBoxHelper() {
	className = "SuiBox";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void SuiBoxHelper::finalizeHelper() {
	SuiBoxHelper::finalize();
}

DistributedObject* SuiBoxHelper::instantiateObject() {
	return new SuiBox(DummyConstructorParameter::instance());
}

DistributedObjectServant* SuiBoxHelper::instantiateServant() {
	return new SuiBoxImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* SuiBoxHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SuiBoxAdapter((SuiBoxImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

