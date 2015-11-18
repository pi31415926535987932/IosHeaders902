/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct __CFBoolean* CFBooleanRef;

typedef struct {
	char field1;
	char field2;
	char field3;
	char field4;
	char field5;
	float field6;
	int field7;
} SCD_Struct_SB5;

typedef struct _NSZone* NSZoneRef;

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct opaque_pthread_mutex_t {
	long __sig;
	char __opaque[40];
} opaque_pthread_mutex_t;

typedef struct {
	unsigned field1[8];
} SCD_Struct_SB9;

typedef struct __CTServerConnection* CTServerConnectionRef;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct __CFString* CFStringRef;

typedef struct tcp_connection_fallback_watch_s* tcp_connection_fallback_watch_sRef;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_SB14;

typedef struct CGColor* CGColorRef;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	int field6;
} SCD_Struct_SB16;

typedef struct {
	unsigned field1;
} SCD_Struct_SB17;

typedef struct {
	SCD_Struct_SB16 field1;
	SCD_Struct_SB17 field2;
} SCD_Struct_SB18;

typedef struct {
	int startStyle;
	int endStyle;
	float transitionFraction;
} SCD_Struct_SB19;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __WiFiManagerClient* WiFiManagerClientRef;

typedef struct __WiFiDeviceClient* WiFiDeviceClientRef;

typedef struct __WiFiNetwork* WiFiNetworkRef;

typedef struct SBIconCoordinate {
	int row;
	int col;
} SBIconCoordinate;

typedef struct NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct {
	float field1;
	__CFArray field2;
	float field3;
} SCD_Struct_SB27;

typedef struct {
	id field1;
	id field2;
	id field3;
	id field4;
} SCD_Struct_SB28;

typedef struct {
	unsigned field1;
	unsigned field2;
	float field3;
} SCD_Struct_SB29;

typedef struct BKSDisplayBrightnessTransaction* BKSDisplayBrightnessTransactionRef;

typedef struct {
	unsigned long field1;
	id field2;
	unsigned long field3;
	unsigned long field4[5];
} SCD_Struct_SB31;

typedef struct MGNotificationTokenStruct* MGNotificationTokenStructRef;

typedef struct {
	char valid;
	SCD_Struct_SB19 styleTransitionState;
} SCD_Struct_SB33;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct SBNormalizedTransitionInterval {
	float start;
	float duration;
} SBNormalizedTransitionInterval;

typedef struct _CARenderImage* CARenderImageRef;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 1;
	unsigned field6 : 1;
	unsigned field7 : 1;
	unsigned field8 : 1;
	unsigned field9 : 1;
	unsigned field10 : 1;
	unsigned field11 : 1;
	unsigned field12 : 1;
} SCD_Struct_SB38;

typedef struct CGImage* CGImageRef;

typedef struct {
	char itemIsEnabled[27];
	char timeString[64];
	int gsmSignalStrengthRaw;
	int gsmSignalStrengthBars;
	char serviceString[100];
	char serviceCrossfadeString[100];
	char serviceImages[2][100];
	char operatorDirectory[1024];
	unsigned serviceContentType;
	int wifiSignalStrengthRaw;
	int wifiSignalStrengthBars;
	unsigned dataNetworkType;
	int batteryCapacity;
	unsigned batteryState;
	char batteryDetailString[150];
	int bluetoothBatteryCapacity;
	int thermalColor;
	unsigned thermalSunlightMode : 1;
	unsigned slowActivity : 1;
	unsigned syncActivity : 1;
	char activityDisplayId[256];
	unsigned bluetoothConnected : 1;
	unsigned displayRawGSMSignal : 1;
	unsigned displayRawWifiSignal : 1;
	unsigned locationIconType : 1;
	unsigned quietModeInactive : 1;
	unsigned tetheringConnectionCount;
	unsigned batterySaverModeActive : 1;
	char breadcrumbTitle[256];
	char breadcrumbSecondaryTitle[256];
} SCD_Struct_SB40;

typedef struct OpaqueFigVirtualDisplaySession* OpaqueFigVirtualDisplaySessionRef;

typedef struct SBWindowLevelRange_struct {
	float start;
	float end;
} SBWindowLevelRange_struct;

typedef struct __CFArray* CFArrayRef;

