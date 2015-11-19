/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSString, NSMutableArray, NSObject;

@interface ICCameraProperties : NSObject {

	NSString* _volumePath;
	char _ejectable;
	char _beingEjected;
	char _locked;
	char _allowsSyncingClock;
	unsigned _contentCatalogPercentCompleted;
	char _batteryLevelAvailable;
	unsigned _batteryLevel;
	NSMutableArray* _contents;
	NSMutableArray* _mediaFiles;
	NSMutableArray* _notifyArray;
	NSMutableArray* _toBeNotifiedAddedItems;
	int _contentsLock;
	int _mediaFilesLock;
	double _timeOffset;
	unsigned _estimatedNumberOfDownloadableItems;
	unsigned _numberOfDownloadableItems;
	char _contentReceived;
	double _downloadCancelTimestamp;
	NSObject*<OS_dispatch_queue> _thumbnailFetchQ;
	NSObject*<OS_dispatch_queue> _metadataFetchQ;
	NSObject*<OS_dispatch_queue> _downloadQ;
	NSObject*<OS_dispatch_queue> _generalQ;
	NSObject*<OS_dispatch_semaphore> _deviceQSemaphore;
	char _accessRestrictedAppleDevice;

}

@property (retain) NSString * volumePath;                                          //@synthesize volumePath=_volumePath - In the implementation block
@property (assign) char ejectable;                                                 //@synthesize ejectable=_ejectable - In the implementation block
@property (assign) char beingEjected;                                              //@synthesize beingEjected=_beingEjected - In the implementation block
@property (assign) char locked;                                                    //@synthesize locked=_locked - In the implementation block
@property (assign) char allowsSyncingClock;                                        //@synthesize allowsSyncingClock=_allowsSyncingClock - In the implementation block
@property (assign) unsigned contentCatalogPercentCompleted;                        //@synthesize contentCatalogPercentCompleted=_contentCatalogPercentCompleted - In the implementation block
@property (assign) char batteryLevelAvailable;                                     //@synthesize batteryLevelAvailable=_batteryLevelAvailable - In the implementation block
@property (assign) unsigned batteryLevel;                                          //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (retain) NSMutableArray * contents;                                      //@synthesize contents=_contents - In the implementation block
@property (retain) NSMutableArray * mediaFiles;                                    //@synthesize mediaFiles=_mediaFiles - In the implementation block
@property (retain) NSMutableArray * toBeNotifiedAddedItems;                        //@synthesize toBeNotifiedAddedItems=_toBeNotifiedAddedItems - In the implementation block
@property (retain) NSMutableArray * notifyArray;                                   //@synthesize notifyArray=_notifyArray - In the implementation block
@property (assign) int mediaFilesLock;                                             //@synthesize mediaFilesLock=_mediaFilesLock - In the implementation block
@property (assign) int contentsLock;                                               //@synthesize contentsLock=_contentsLock - In the implementation block
@property (assign) double timeOffset;                                              //@synthesize timeOffset=_timeOffset - In the implementation block
@property (assign) unsigned estimatedNumberOfDownloadableItems;                    //@synthesize estimatedNumberOfDownloadableItems=_estimatedNumberOfDownloadableItems - In the implementation block
@property (assign) unsigned numberOfDownloadableItems;                             //@synthesize numberOfDownloadableItems=_numberOfDownloadableItems - In the implementation block
@property (assign) char contentReceived;                                           //@synthesize contentReceived=_contentReceived - In the implementation block
@property (assign) double downloadCancelTimestamp;                                 //@synthesize downloadCancelTimestamp=_downloadCancelTimestamp - In the implementation block
@property (assign) NSObject*<OS_dispatch_queue> thumbnailFetchQ;                   //@synthesize thumbnailFetchQ=_thumbnailFetchQ - In the implementation block
@property (assign) NSObject*<OS_dispatch_queue> metadataFetchQ;                    //@synthesize metadataFetchQ=_metadataFetchQ - In the implementation block
@property (assign) NSObject*<OS_dispatch_queue> downloadQ;                         //@synthesize downloadQ=_downloadQ - In the implementation block
@property (assign) NSObject*<OS_dispatch_queue> generalQ;                          //@synthesize generalQ=_generalQ - In the implementation block
@property (assign) NSObject*<OS_dispatch_semaphore> deviceQSemaphore;              //@synthesize deviceQSemaphore=_deviceQSemaphore - In the implementation block
@property (assign) char accessRestrictedAppleDevice;                               //@synthesize accessRestrictedAppleDevice=_accessRestrictedAppleDevice - In the implementation block
-(void)dealloc;
-(NSMutableArray *)contents;
-(double)timeOffset;
-(void)setTimeOffset:(double)arg1 ;
-(void)setContents:(NSMutableArray *)arg1 ;
-(void)setLocked:(char)arg1 ;
-(unsigned)batteryLevel;
-(void)setVolumePath:(NSString *)arg1 ;
-(void)setMediaFiles:(NSMutableArray *)arg1 ;
-(void)setToBeNotifiedAddedItems:(NSMutableArray *)arg1 ;
-(void)setNotifyArray:(NSMutableArray *)arg1 ;
-(void)lockMediaFiles;
-(void)unlockMediaFiles;
-(void)lockContents;
-(void)unlockContents;
-(NSString *)volumePath;
-(char)ejectable;
-(void)setEjectable:(char)arg1 ;
-(char)beingEjected;
-(void)setBeingEjected:(char)arg1 ;
-(NSMutableArray *)notifyArray;
-(char)allowsSyncingClock;
-(void)setAllowsSyncingClock:(char)arg1 ;
-(void)setContentCatalogPercentCompleted:(unsigned)arg1 ;
-(char)batteryLevelAvailable;
-(void)setBatteryLevelAvailable:(char)arg1 ;
-(NSMutableArray *)toBeNotifiedAddedItems;
-(int)mediaFilesLock;
-(void)setMediaFilesLock:(int)arg1 ;
-(int)contentsLock;
-(void)setContentsLock:(int)arg1 ;
-(void)setEstimatedNumberOfDownloadableItems:(unsigned)arg1 ;
-(unsigned)numberOfDownloadableItems;
-(void)setNumberOfDownloadableItems:(unsigned)arg1 ;
-(char)contentReceived;
-(void)setContentReceived:(char)arg1 ;
-(double)downloadCancelTimestamp;
-(void)setDownloadCancelTimestamp:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)thumbnailFetchQ;
-(void)setThumbnailFetchQ:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)metadataFetchQ;
-(void)setMetadataFetchQ:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)downloadQ;
-(void)setDownloadQ:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)generalQ;
-(void)setGeneralQ:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)deviceQSemaphore;
-(void)setDeviceQSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(char)accessRestrictedAppleDevice;
-(void)setAccessRestrictedAppleDevice:(char)arg1 ;
-(void)finalize;
-(char)locked;
-(unsigned)estimatedNumberOfDownloadableItems;
-(unsigned)contentCatalogPercentCompleted;
-(NSMutableArray *)mediaFiles;
-(void)setBatteryLevel:(unsigned)arg1 ;
@end

