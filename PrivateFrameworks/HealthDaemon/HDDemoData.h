/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSFileManager;

@interface HDDemoData : NSObject {

	NSString* _baselineDemoDataPath;
	NSString* _demoDataPath;
	NSFileManager* _fileManager;

}
+(id)demoDataDirectory;
-(id)initWithProfile:(id)arg1 ;
-(char)_baselineDataDemoAvailable;
-(char)_createAndPopulateDemoDataDirectoryIfNeeded;
-(id)_directoryPath;
@end

