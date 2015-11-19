/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AXHearingSupport/AXHADeviceProtocol.h>

@protocol AXHARemoteUpdateProtocol;
@class NSString, NSMutableArray, NSDate, NSArray, AXHearingAidMode;

@interface AXRemoteHearingAidDevice : NSObject <AXHADeviceProtocol> {

	char _delayWritePending;
	char _keepInSync;
	char _isBluetoothPaired;
	char _isPaired;
	char _isConnecting;
	char _leftConnected;
	char _rightConnected;
	char _supportsBinauralStreaming;
	char _supportsCombinedPresets;
	char _supportsCombinedVolumes;
	short _leftMicrophoneVolumeSteps;
	short _rightMicrophoneVolumeSteps;
	short _leftStreamVolumeSteps;
	short _rightStreamVolumeSteps;
	short _leftSensitivitySteps;
	short _rightSensitivitySteps;
	float _rightMicrophoneVolume;
	float _leftMicrophoneVolume;
	float _rightStreamVolume;
	float _leftStreamVolume;
	float _leftSensitivity;
	float _rightSensitivity;
	int availableEars;
	id<AXHARemoteUpdateProtocol> _updateDelegate;
	NSString* _name;
	NSMutableArray* _manufacturer;
	NSMutableArray* _model;
	NSString* _leftFirmwareVersion;
	NSString* _rightFirmwareVersion;
	NSString* _leftHardwareVersion;
	NSString* _rightHardwareVersion;
	NSString* _rightUUID;
	NSString* _leftUUID;
	NSString* _leftPeripheralUUID;
	NSString* _rightPeripheralUUID;
	float _rightBatteryLevel;
	float _leftBatteryLevel;
	NSDate* _leftBatteryLowDate;
	NSDate* _rightBatteryLowDate;
	NSArray* _rightPrograms;
	NSArray* _leftPrograms;
	AXHearingAidMode* _leftSelectedProgram;
	AXHearingAidMode* _rightSelectedProgram;
	AXHearingAidMode* _leftSelectedStreamingProgram;
	AXHearingAidMode* _rightSelectedStreamingProgram;
	NSString* _deviceUUID;
	unsigned long long _loadedProperties;
	unsigned long long _pendingPropertyWrites;

}

@property (assign,nonatomic) id<AXHARemoteUpdateProtocol> updateDelegate;                   //@synthesize updateDelegate=_updateDelegate - In the implementation block
@property (assign,nonatomic) char isBluetoothPaired;                                        //@synthesize isBluetoothPaired=_isBluetoothPaired - In the implementation block
@property (assign,nonatomic) char isPaired;                                                 //@synthesize isPaired=_isPaired - In the implementation block
@property (assign,nonatomic) char isConnecting;                                             //@synthesize isConnecting=_isConnecting - In the implementation block
@property (assign,nonatomic) char leftConnected;                                            //@synthesize leftConnected=_leftConnected - In the implementation block
@property (assign,nonatomic) char rightConnected;                                           //@synthesize rightConnected=_rightConnected - In the implementation block
@property (nonatomic,retain) NSString * name;                                               //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * manufacturer;                                 //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,retain) NSMutableArray * model;                                        //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSString * leftFirmwareVersion;                                //@synthesize leftFirmwareVersion=_leftFirmwareVersion - In the implementation block
@property (nonatomic,retain) NSString * rightFirmwareVersion;                               //@synthesize rightFirmwareVersion=_rightFirmwareVersion - In the implementation block
@property (nonatomic,retain) NSString * leftHardwareVersion;                                //@synthesize leftHardwareVersion=_leftHardwareVersion - In the implementation block
@property (nonatomic,retain) NSString * rightHardwareVersion;                               //@synthesize rightHardwareVersion=_rightHardwareVersion - In the implementation block
@property (nonatomic,retain) NSString * rightUUID;                                          //@synthesize rightUUID=_rightUUID - In the implementation block
@property (nonatomic,retain) NSString * leftUUID;                                           //@synthesize leftUUID=_leftUUID - In the implementation block
@property (nonatomic,retain) NSString * leftPeripheralUUID;                                 //@synthesize leftPeripheralUUID=_leftPeripheralUUID - In the implementation block
@property (nonatomic,retain) NSString * rightPeripheralUUID;                                //@synthesize rightPeripheralUUID=_rightPeripheralUUID - In the implementation block
@property (assign,nonatomic) float rightBatteryLevel;                                       //@synthesize rightBatteryLevel=_rightBatteryLevel - In the implementation block
@property (assign,nonatomic) float leftBatteryLevel;                                        //@synthesize leftBatteryLevel=_leftBatteryLevel - In the implementation block
@property (nonatomic,retain) NSDate * leftBatteryLowDate;                                   //@synthesize leftBatteryLowDate=_leftBatteryLowDate - In the implementation block
@property (nonatomic,retain) NSDate * rightBatteryLowDate;                                  //@synthesize rightBatteryLowDate=_rightBatteryLowDate - In the implementation block
@property (assign,nonatomic) short leftMicrophoneVolumeSteps;                               //@synthesize leftMicrophoneVolumeSteps=_leftMicrophoneVolumeSteps - In the implementation block
@property (assign,nonatomic) short rightMicrophoneVolumeSteps;                              //@synthesize rightMicrophoneVolumeSteps=_rightMicrophoneVolumeSteps - In the implementation block
@property (assign,nonatomic) short leftStreamVolumeSteps;                                   //@synthesize leftStreamVolumeSteps=_leftStreamVolumeSteps - In the implementation block
@property (assign,nonatomic) short rightStreamVolumeSteps;                                  //@synthesize rightStreamVolumeSteps=_rightStreamVolumeSteps - In the implementation block
@property (assign,nonatomic) short leftSensitivitySteps;                                    //@synthesize leftSensitivitySteps=_leftSensitivitySteps - In the implementation block
@property (assign,nonatomic) short rightSensitivitySteps;                                   //@synthesize rightSensitivitySteps=_rightSensitivitySteps - In the implementation block
@property (assign,nonatomic) char supportsBinauralStreaming;                                //@synthesize supportsBinauralStreaming=_supportsBinauralStreaming - In the implementation block
@property (assign,nonatomic) char supportsCombinedPresets;                                  //@synthesize supportsCombinedPresets=_supportsCombinedPresets - In the implementation block
@property (assign,nonatomic) char supportsCombinedVolumes;                                  //@synthesize supportsCombinedVolumes=_supportsCombinedVolumes - In the implementation block
@property (nonatomic,copy) NSArray * rightPrograms;                                         //@synthesize rightPrograms=_rightPrograms - In the implementation block
@property (nonatomic,copy) NSArray * leftPrograms;                                          //@synthesize leftPrograms=_leftPrograms - In the implementation block
@property (nonatomic,retain) AXHearingAidMode * leftSelectedProgram;                        //@synthesize leftSelectedProgram=_leftSelectedProgram - In the implementation block
@property (nonatomic,retain) AXHearingAidMode * rightSelectedProgram;                       //@synthesize rightSelectedProgram=_rightSelectedProgram - In the implementation block
@property (nonatomic,retain) AXHearingAidMode * leftSelectedStreamingProgram;               //@synthesize leftSelectedStreamingProgram=_leftSelectedStreamingProgram - In the implementation block
@property (nonatomic,retain) AXHearingAidMode * rightSelectedStreamingProgram;              //@synthesize rightSelectedStreamingProgram=_rightSelectedStreamingProgram - In the implementation block
@property (nonatomic,retain) NSString * deviceUUID;                                         //@synthesize deviceUUID=_deviceUUID - In the implementation block
@property (assign,nonatomic) unsigned long long loadedProperties;                           //@synthesize loadedProperties=_loadedProperties - In the implementation block
@property (assign,nonatomic) unsigned long long pendingPropertyWrites;                      //@synthesize pendingPropertyWrites=_pendingPropertyWrites - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char keepInSync;                                               //@synthesize keepInSync=_keepInSync - In the implementation block
@property (assign,nonatomic) int availableEars; 
@property (assign,nonatomic) float rightMicrophoneVolume;                                   //@synthesize rightMicrophoneVolume=_rightMicrophoneVolume - In the implementation block
@property (assign,nonatomic) float leftMicrophoneVolume;                                    //@synthesize leftMicrophoneVolume=_leftMicrophoneVolume - In the implementation block
@property (assign,nonatomic) float rightStreamVolume;                                       //@synthesize rightStreamVolume=_rightStreamVolume - In the implementation block
@property (assign,nonatomic) float leftStreamVolume;                                        //@synthesize leftStreamVolume=_leftStreamVolume - In the implementation block
@property (assign,nonatomic) float rightSensitivity;                                        //@synthesize rightSensitivity=_rightSensitivity - In the implementation block
@property (assign,nonatomic) float leftSensitivity;                                         //@synthesize leftSensitivity=_leftSensitivity - In the implementation block
-(id<AXHARemoteUpdateProtocol>)updateDelegate;
-(void)setUpdateDelegate:(id<AXHARemoteUpdateProtocol>)arg1 ;
-(unsigned long long)loadedProperties;
-(char)isConnecting;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSMutableArray *)model;
-(id)_valueForProperty:(unsigned long long)arg1 ;
-(void)connect;
-(id)valueForProperty:(unsigned long long)arg1 ;
-(void)setModel:(NSMutableArray *)arg1 ;
-(char)leftAvailable;
-(char)rightAvailable;
-(char)isLeftConnected;
-(float)leftBatteryLevel;
-(char)isRightConnected;
-(float)rightBatteryLevel;
-(void)setLeftPrograms:(NSArray *)arg1 ;
-(void)setRightPrograms:(NSArray *)arg1 ;
-(void)setAvailableEars:(int)arg1 ;
-(void)setLeftPeripheralUUID:(NSString *)arg1 ;
-(void)setLeftUUID:(NSString *)arg1 ;
-(void)setRightUUID:(NSString *)arg1 ;
-(void)setRightPeripheralUUID:(NSString *)arg1 ;
-(NSString *)leftUUID;
-(NSString *)rightUUID;
-(void)setIsPaired:(char)arg1 ;
-(void)setLeftFirmwareVersion:(NSString *)arg1 ;
-(void)setRightFirmwareVersion:(NSString *)arg1 ;
-(void)setLeftHardwareVersion:(NSString *)arg1 ;
-(void)setRightHardwareVersion:(NSString *)arg1 ;
-(int)availableEars;
-(char)leftConnected;
-(char)rightConnected;
-(char)didLoadProperty:(unsigned long long)arg1 ;
-(unsigned long long)pendingPropertyWrites;
-(void)setPendingPropertyWrites:(unsigned long long)arg1 ;
-(void)_delayWriteProperties;
-(void)writeVolumesForProperty:(unsigned long long)arg1 ;
-(char)supportsCombinedPresets;
-(NSArray *)leftPrograms;
-(NSArray *)rightPrograms;
-(void)setLeftSelectedStreamingProgram:(AXHearingAidMode *)arg1 ;
-(void)setRightSelectedStreamingProgram:(AXHearingAidMode *)arg1 ;
-(void)setRightSelectedProgram:(AXHearingAidMode *)arg1 ;
-(void)setLeftSelectedProgram:(AXHearingAidMode *)arg1 ;
-(AXHearingAidMode *)leftSelectedProgram;
-(AXHearingAidMode *)leftSelectedStreamingProgram;
-(AXHearingAidMode *)rightSelectedProgram;
-(AXHearingAidMode *)rightSelectedStreamingProgram;
-(char)showCombinedPrograms;
-(void)_updateSelectedProgramsProperties;
-(void)_writeAllProgramSelectionsToPeripheral;
-(id)programs;
-(char)didLoadRequiredProperties;
-(void)loadRequiredProperties;
-(void)setLeftBatteryLevel:(float)arg1 ;
-(void)setRightBatteryLevel:(float)arg1 ;
-(void)setLoadedProperties:(unsigned long long)arg1 ;
-(void)setLeftConnected:(char)arg1 ;
-(void)setRightConnected:(char)arg1 ;
-(void)setLeftBatteryLowDate:(NSDate *)arg1 ;
-(void)setRightBatteryLowDate:(NSDate *)arg1 ;
-(void)setIsBluetoothPaired:(char)arg1 ;
-(void)setLeftSensitivitySteps:(short)arg1 ;
-(void)setRightSensitivitySteps:(short)arg1 ;
-(void)setLeftMicrophoneVolumeSteps:(short)arg1 ;
-(void)setRightMicrophoneVolumeSteps:(short)arg1 ;
-(void)setLeftStreamVolumeSteps:(short)arg1 ;
-(void)setRightStreamVolumeSteps:(short)arg1 ;
-(void)setSupportsCombinedPresets:(char)arg1 ;
-(void)setSupportsCombinedVolumes:(char)arg1 ;
-(void)setSupportsBinauralStreaming:(char)arg1 ;
-(float)leftMicrophoneVolume;
-(float)rightMicrophoneVolume;
-(float)leftStreamVolume;
-(float)rightStreamVolume;
-(NSString *)leftFirmwareVersion;
-(NSString *)rightFirmwareVersion;
-(NSString *)leftHardwareVersion;
-(NSString *)rightHardwareVersion;
-(NSDate *)leftBatteryLowDate;
-(NSDate *)rightBatteryLowDate;
-(char)isBluetoothPaired;
-(short)leftSensitivitySteps;
-(short)rightSensitivitySteps;
-(short)leftMicrophoneVolumeSteps;
-(short)leftStreamVolumeSteps;
-(short)rightStreamVolumeSteps;
-(float)leftSensitivity;
-(float)rightSensitivity;
-(char)supportsCombinedVolumes;
-(char)supportsBinauralStreaming;
-(id)initWithPersistentRepresentation:(id)arg1 ;
-(void)disconnectAndUnpair:(char)arg1 ;
-(char)hasConnection;
-(char)containsPeripheralWithUUID:(id)arg1 ;
-(char)didLoadBasicProperties;
-(void)selectProgram:(id)arg1 ;
-(id)selectedPrograms;
-(id)selectedProgramIndexes;
-(char)keepInSync;
-(void)setKeepInSync:(char)arg1 ;
-(NSString *)leftPeripheralUUID;
-(NSString *)rightPeripheralUUID;
-(void)setRightMicrophoneVolume:(float)arg1 ;
-(void)setLeftMicrophoneVolume:(float)arg1 ;
-(void)setRightStreamVolume:(float)arg1 ;
-(void)setLeftStreamVolume:(float)arg1 ;
-(void)setRightSensitivity:(float)arg1 ;
-(void)setLeftSensitivity:(float)arg1 ;
-(short)rightMicrophoneVolumeSteps;
-(id)initWithRemoteRepresentation:(id)arg1 andDeviceID:(id)arg2 ;
-(void)setIsConnecting:(char)arg1 ;
-(char)isConnected;
-(NSMutableArray *)manufacturer;
-(void)setManufacturer:(NSMutableArray *)arg1 ;
-(void)setDeviceUUID:(NSString *)arg1 ;
-(NSString *)deviceUUID;
-(char)isPaired;
-(void)setValue:(id)arg1 forProperty:(unsigned long long)arg2 ;
@end

