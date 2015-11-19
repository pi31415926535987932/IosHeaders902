/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:35 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSDictionary, NSDate, NSURLSession, NSObject;

@interface CPLConfiguration : NSObject {

	NSURL* _configurationFileURL;
	NSDictionary* _configuration;
	NSDate* _lastUpdate;
	double _updateInterval;
	NSURLSession* _currentSession;
	NSObject*<OS_dispatch_queue> _lock;

}
+(void)disableConfigurationFetching;
-(double)_updateInterval;
-(id)valueForKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)_save;
-(void)_load;
-(void)check;
-(id)initWithClientLibraryBaseURL:(id)arg1 ;
-(void)refetchFromDisk;
-(void)_setContents:(id)arg1 ;
@end

