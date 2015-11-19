/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, MSCameraDeviceManager, PTPCameraDeviceManager, ExFATCameraDeviceManager;

@interface ICMasterDeviceBrowser : NSObject {

	NSMutableArray* _devices;
	NSMutableArray* _browsers;
	int _numberOfBrowsingBrowsers;
	MSCameraDeviceManager* _msDevManager;
	PTPCameraDeviceManager* _ptpDevManager;
	ExFATCameraDeviceManager* _exFATManager;

}

@property (readonly) NSMutableArray * devices;               //@synthesize devices=_devices - In the implementation block
@property (readonly) NSMutableArray * browsers;              //@synthesize browsers=_browsers - In the implementation block
+(char)exists;
+(id)defaultBrowser;
-(void)dealloc;
-(id)init;
-(int)start:(id)arg1 ;
-(void)stop:(id)arg1 ;
-(NSMutableArray *)devices;
-(void)handleCommandCompletionNotification:(id)arg1 ;
-(void)handleImageCaptureEventNotification:(id)arg1 ;
-(void)addBrowser:(id)arg1 ;
-(int)addPTPCamera:(id)arg1 ;
-(int)addMSCamera:(id)arg1 ;
-(void)removeBrowser:(id)arg1 ;
-(void)removePTPCamera:(id)arg1 ;
-(int)addExFATCamera:(id)arg1 ;
-(void)removeMSCamera:(id)arg1 ;
-(id)deviceWithDelegate:(id)arg1 ;
-(void)informBrowserDelegateUsingSelector:(SEL)arg1 withObject:(id)arg2 ;
-(NSMutableArray *)browsers;
-(void)finalize;
@end

