/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSURL, NSString, NSFileManager, NSMutableIndexSet, NSObject;

@interface PLSimpleDCIMDirectory : NSObject {

	NSURL* _baseURL;
	NSString* _subDirSuffix;
	unsigned _directoryLimit;
	NSFileManager* _fileManager;
	NSMutableIndexSet* _availableFileNameNumbers;
	NSURL* _currentSubDirectory;
	unsigned _currentSubDirectoryNumber;
	NSString* _userInfoPath;
	char _hasLoadedUserInfo;
	char _representsCameraRoll;
	NSObject*<OS_dispatch_queue> _isolation;

}

@property (nonatomic,retain,readonly) NSURL * currentSubDirectory; 
@property (assign) char representsCameraRoll;                                   //@synthesize representsCameraRoll=_representsCameraRoll - In the implementation block
@property (retain,readonly) NSURL * directoryURL;                               //@synthesize baseURL=_baseURL - In the implementation block
+(id)cameraRollPlistName;
+(id)migrateOldPlistToNewPlist:(id)arg1 ;
+(id)cloudPlistName;
-(void)dealloc;
-(id)init;
-(void)reset;
-(NSURL *)directoryURL;
-(id)initWithDirectoryURL:(id)arg1 subDirectorySuffix:(id)arg2 perDirectoryLimit:(unsigned)arg3 userInfoPath:(id)arg4 ;
-(void)setRepresentsCameraRoll:(char)arg1 ;
-(id)nextAvailableFileURLWithExtension:(id)arg1 ;
-(char)_ensureDirectoryExists:(id)arg1 ;
-(NSURL *)currentSubDirectory;
-(void)_saveUserInfo;
-(char)representsCameraRoll;
-(void)_loadUserInfoLastDirectoryNumber:(id*)arg1 lastFileNumber:(id*)arg2 ;
-(id)subDirURLForNumber:(unsigned)arg1 create:(char)arg2 didCreate:(char*)arg3 ;
-(NSRange)fileNameNumberRangeForDirNumber:(unsigned)arg1 ;
-(id)availableFileNameNumbersInDirNumber:(unsigned)arg1 ;
@end

