/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVOutputDeviceDiscoverySessionInternal, NSArray, AVOutputDeviceDiscoverySessionAvailableOutputDevices;

@interface AVOutputDeviceDiscoverySession : NSObject {

	AVOutputDeviceDiscoverySessionInternal* _outputDeviceDiscoverySession;

}

@property (assign,nonatomic) int discoveryMode; 
@property (nonatomic,readonly) NSArray * availableOutputDevices; 
@property (nonatomic,readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices * availableOutputDevicesObject; 
@property (nonatomic,readonly) char devicePresenceDetected; 
-(long)_configureFigEndpointPickerWithFeature:(unsigned)arg1 ;
-(void)_removeFigEndpointPickerNotifications;
-(void)_addFigEndpointPickerNotifications;
-(AVOutputDeviceDiscoverySessionAvailableOutputDevices *)availableOutputDevicesObject;
-(void)_handlePickerServerConnectionDiedNotification;
-(NSArray *)availableOutputDevices;
-(int)discoveryMode;
-(char)devicePresenceDetected;
-(id)initWithDeviceFeatures:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setDiscoveryMode:(int)arg1 ;
-(void)finalize;
@end

