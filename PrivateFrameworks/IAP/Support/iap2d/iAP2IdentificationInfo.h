/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iap2d/iap2d-Structs.h>
#import <iap2d/iAP2IdentificationParameter.h>

@class NSString, NSMutableSet, NSMutableDictionary, iAP2VehicleInfo, iAP2VehicleStatus, iAP2LocationInfo, iAP2Connection, iAP2Message, NSMutableData, NSMutableString;

@interface iAP2IdentificationInfo : iAP2IdentificationParameter {

	NSString* accName;
	NSString* accModel;
	NSString* accManufacturer;
	NSString* accSerialNumber;
	NSString* accFirmwareVersion;
	NSString* accHardwareVersion;
	NSString* accDockType;
	NSMutableSet* messagesSentByAccessorySet;
	NSMutableSet* messagesRcvdByAccessorySet;
	int maximumCurrentDrawnFromDevice;
	int maximumCurrentDrawnInUHPM;
	NSString* preferredAppBundleSeedID;
	NSMutableDictionary* eaProtocols;
	NSMutableDictionary* transportComponents;
	NSMutableDictionary* hidComponents;
	NSString* currentLanguage;
	NSMutableSet* supportedLanguagesSet;
	unsigned _maximumPOIDataFormatVersion;
	iAP2VehicleInfo* vehicleInfo;
	iAP2VehicleStatus* vehicleStatus;
	iAP2LocationInfo* locationInfo;
	NSMutableDictionary* cameraComponents;
	iAP2Connection* _iAP2Connection;
	iAP2Message* rejectMsg;
	NSMutableData* rejectParamDataSentByAcc;
	NSMutableData* rejectParamDataRcvdFromDev;
	char sentByAccNeedsToBeRejected;
	char rcvdFromDeviceNeedsToBeRejected;
	NSMutableSet* seenMessagesSentByAccSet;
	NSMutableSet* seenMessagesRcvdFromDevSet;
	NSMutableString* rejectString;
	NSMutableString* rejectStringMessagesSentByAcc;
	NSMutableString* rejectStringMessagesRcvdFromDev;
	int powerSourceType;
	int powerDuringSleepType;

}

@property (retain) NSString * accName; 
@property (retain) NSString * accModel; 
@property (retain) NSString * accManufacturer; 
@property (retain) NSString * accSerialNumber; 
@property (retain) NSString * accFirmwareVersion; 
@property (retain) NSString * accHardwareVersion; 
@property (retain) NSString * accDockType; 
@property (assign) int maximumCurrentDrawnFromDevice; 
@property (assign) int maximumCurrentDrawnInUHPM; 
@property (retain) NSString * preferredAppBundleSeedID; 
@property (nonatomic,readonly) iAP2Connection * identConnection;                    //@synthesize iAP2Connection=_iAP2Connection - In the implementation block
@property (assign,nonatomic) int powerSourceType; 
@property (assign,nonatomic) int powerDuringSleepType; 
@property (retain) NSMutableSet * messagesSentByAccessorySet; 
@property (retain) NSMutableSet * messagesRcvdByAccessorySet; 
@property (retain,readonly) NSMutableDictionary * transportComponents; 
@property (retain) NSMutableDictionary * eaProtocols; 
@property (retain,readonly) NSMutableDictionary * hidComponents; 
@property (retain) NSString * currentLanguage; 
@property (retain,readonly) NSMutableSet * supportedLanguagesSet; 
@property (assign) unsigned maximumPOIDataFormatVersion;                            //@synthesize maximumPOIDataFormatVersion=_maximumPOIDataFormatVersion - In the implementation block
@property (retain) iAP2VehicleInfo * vehicleInfo; 
@property (retain) iAP2VehicleStatus * vehicleStatus; 
@property (retain) iAP2LocationInfo * locationInfo; 
@property (retain) NSMutableDictionary * cameraComponents; 
@property (readonly) BOOL supportsCertCache; 
-(int)checkIdentificationMsgIDs:(id)arg1 forMsgIDList:(const iAP2MsgIdentifyInfo_t*)arg2 withCount:(unsigned short)arg3 andMsgsSeen:(BOOL*)arg4 ;
-(NSMutableDictionary *)transportComponents;
-(void)rejectAllMsgIDsForList:(const iAP2MsgIdentifyInfo_t*)arg1 withCount:(unsigned short)arg2 andStatus:(int)arg3 ;
-(BOOL)checkRequiredMsgIDs:(const iAP2MsgIdentifyInfo_t*)arg1 withCount:(unsigned short)arg2 anyMsgsSeen:(BOOL*)arg3 ;
-(NSMutableDictionary *)eaProtocols;
-(NSMutableSet *)messagesSentByAccessorySet;
-(NSMutableSet *)messagesRcvdByAccessorySet;
-(int)powerDuringSleepType;
-(iAP2VehicleInfo *)vehicleInfo;
-(iAP2VehicleStatus *)vehicleStatus;
-(id)findFirstTransportComponentWithType:(int)arg1 ;
-(NSString *)accModel;
-(void)releaseRejectMessage;
-(int)processIdentificationInfoComplete:(id)arg1 ;
-(NSString *)accName;
-(int)checkIdentificationInfo:(id)arg1 ;
-(int)createEAProtocols;
-(void)setAccModel:(NSString *)arg1 ;
-(void)setAccName:(NSString *)arg1 ;
-(void)setAccManufacturer:(NSString *)arg1 ;
-(void)setAccSerialNumber:(NSString *)arg1 ;
-(void)setAccFirmwareVersion:(NSString *)arg1 ;
-(void)setAccHardwareVersion:(NSString *)arg1 ;
-(void)setAccDockType:(NSString *)arg1 ;
-(const char*)rejectName:(int)arg1 ;
-(void)addRejectString:(id)arg1 ;
-(const char*)paramName:(int)arg1 ;
-(void)appendRejectMsgID:(int)arg1 withDirection:(int)arg2 andReason:(int)arg3 ;
-(void)addRejectParam:(int)arg1 withReason:(int)arg2 ;
-(void)setPowerSourceType:(int)arg1 ;
-(void)setPowerDuringSleepType:(int)arg1 ;
-(NSMutableDictionary *)hidComponents;
-(NSMutableSet *)supportedLanguagesSet;
-(void)setMessagesSentByAccessorySet:(NSMutableSet *)arg1 ;
-(void)setMessagesRcvdByAccessorySet:(NSMutableSet *)arg1 ;
-(id)USBHostHIDComponents;
-(id)nativeBTHIDComponents;
-(void)processAuthAndIdentificationPassedForTransport:(id)arg1 ;
-(void)sendIdentificationSucceeded:(id)arg1 ;
-(iAP2Connection *)identConnection;
-(int)createTransportComponents;
-(void)addRejectGroup:(int)arg1 WithIndex:(id)arg2 andReason:(int)arg3 ;
-(int)createHIDComponents;
-(void)setVehicleInfo:(iAP2VehicleInfo *)arg1 ;
-(void)setVehicleStatus:(iAP2VehicleStatus *)arg1 ;
-(void)setLocationInfo:(iAP2LocationInfo *)arg1 ;
-(int)createCameraComponents;
-(void)rejectMsgID:(int)arg1 withDirection:(int)arg2 andReason:(int)arg3 ;
-(iAP2LocationInfo *)locationInfo;
-(int)powerSourceType;
-(int)checkRequiredParam:(int)arg1 ;
-(int)checkEAProtocolInfo;
-(int)checkHIDComponentInfo;
-(int)checkLanguage;
-(int)checkTransportComponents:(id)arg1 ;
-(int)checkLocationInfo:(id)arg1 ;
-(int)checkCameraComponent:(id)arg1 ;
-(int)checkPowerSource:(id)arg1 ;
-(int)checkMsgIDList:(id)arg1 ;
-(void)addMsgListParamWithDirection:(int)arg1 ;
-(void)acceptMsgID:(int)arg1 withDirection:(int)arg2 ;
-(id)nativeiAPHIDComponents;
-(id)rejectMsg;
-(id)rejectString;
-(int)processStringParam:(id)arg1 withSelector:(SEL)arg2 ;
-(int)processEnumParam:(id)arg1 withSelector:(SEL)arg2 andMax:(unsigned char)arg3 ;
-(BOOL)supportsCertCache;
-(void)setPowerSourceTypeNum:(id)arg1 ;
-(void)setPowerDuringSleepTypeNum:(id)arg1 ;
-(int)createRejectMessage;
-(int)createSupportedLanguagesSet;
-(int)processMessagesSet:(id)arg1 IsSent:(char)arg2 ;
-(int)addTransportComponent:(id)arg1 ;
-(int)addSupportedEAProtocol:(id)arg1 ;
-(int)addHIDComponent:(id)arg1 ;
-(int)addVehicleStatus:(id)arg1 ;
-(int)addLocationInfo:(id)arg1 ;
-(int)addCameraComponent:(id)arg1 ;
-(unsigned)nativeiAPHIDComponentCount;
-(NSString *)accManufacturer;
-(NSString *)accSerialNumber;
-(NSString *)accFirmwareVersion;
-(NSString *)accHardwareVersion;
-(NSString *)accDockType;
-(int)maximumCurrentDrawnFromDevice;
-(void)setMaximumCurrentDrawnFromDevice:(int)arg1 ;
-(int)maximumCurrentDrawnInUHPM;
-(void)setMaximumCurrentDrawnInUHPM:(int)arg1 ;
-(NSString *)preferredAppBundleSeedID;
-(void)setPreferredAppBundleSeedID:(NSString *)arg1 ;
-(void)setEaProtocols:(NSMutableDictionary *)arg1 ;
-(unsigned)maximumPOIDataFormatVersion;
-(void)setMaximumPOIDataFormatVersion:(unsigned)arg1 ;
-(void)setCameraComponents:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cameraComponents;
-(void)dealloc;
-(int)addVehicleInfo:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(NSString *)currentLanguage;
-(void)setCurrentLanguage:(NSString *)arg1 ;
@end

