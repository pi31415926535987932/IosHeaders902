/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:35 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPLAbstractObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSURL, NSMutableArray, CPLPlatformObject;

@interface CPLEngineFileStorage : NSObject <CPLAbstractObject> {

	NSObject*<OS_dispatch_queue> _lock;
	NSString* _logDomain;
	NSURL* _crashMarkerURL;
	NSMutableArray* _uncommittedFiles;
	char _keepOriginals;
	char _deleteImmediately;
	CPLPlatformObject* _platformObject;
	NSURL* _baseURL;

}

@property (nonatomic,readonly) NSURL * baseURL;                                 //@synthesize baseURL=_baseURL - In the implementation block
@property (assign,nonatomic) char keepOriginals;                                //@synthesize keepOriginals=_keepOriginals - In the implementation block
@property (assign,nonatomic) char deleteImmediately;                            //@synthesize deleteImmediately=_deleteImmediately - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject;              //@synthesize platformObject=_platformObject - In the implementation block
+(id)platformImplementationProtocol;
-(NSURL *)baseURL;
-(char)closeWithError:(id*)arg1 ;
-(CPLPlatformObject *)platformObject;
-(char)openWithRecoveryHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
-(char)doWrite:(/*^block*/id)arg1 error:(id*)arg2 ;
-(char)storeFileAtURL:(id)arg1 identity:(id)arg2 isOriginal:(char)arg3 needsCommit:(char*)arg4 error:(id*)arg5 ;
-(char)discardUncommittedFileWithIdentity:(id)arg1 error:(id*)arg2 ;
-(id)retainFileURLForIdentity:(id)arg1 resourceType:(unsigned)arg2 error:(id*)arg3 ;
-(void)checkFileSizeForIdentity:(id)arg1 ;
-(void)doRead:(/*^block*/id)arg1 ;
-(char)releaseFileURL:(id)arg1 error:(id*)arg2 ;
-(char)hasFileWithIdentity:(id)arg1 ;
-(char)linkOrCopyFileWithIdentity:(id)arg1 destinationURL:(id)arg2 error:(id*)arg3 ;
-(char)storeUnretainedFileAtURL:(id)arg1 identity:(id)arg2 isOriginal:(char)arg3 error:(id*)arg4 ;
-(char)deleteFileWithIdentity:(id)arg1 error:(id*)arg2 ;
-(char)discardAllRetainedFileURLsWithError:(id*)arg1 ;
-(char)compactStorage:(id*)arg1 ;
-(char)commitFileWithIdentity:(id)arg1 error:(id*)arg2 ;
-(char)_recoverFromCrashWithRecoveryHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
-(char)_fixupIdentity:(id)arg1 fileURL:(id)arg2 data:(id)arg3 error:(id*)arg4 ;
-(void)_addIdentityToUncommittedFiles:(id)arg1 ;
-(void)_removeIdentityFromUncommittedFiles:(id)arg1 ;
-(char)deleteFileWithIdentity:(id)arg1 includingOriginal:(char)arg2 error:(id*)arg3 ;
-(char)storeUnretainedData:(id)arg1 identity:(id)arg2 isOriginal:(char)arg3 error:(id*)arg4 ;
-(char)compactStorageIncludeOriginals:(char)arg1 error:(id*)arg2 ;
-(char)tryToFreeDiskSpace:(unsigned long long)arg1 actuallyFreedSpace:(unsigned long long*)arg2 includeOriginals:(char)arg3 error:(id*)arg4 ;
-(id)fileEnumeratorIncludingPropertiesForKeys:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(char)_compactStorageIncludeOriginals:(char)arg1 desiredFreeSpace:(unsigned long long*)arg2 error:(id*)arg3 ;
-(unsigned)countOfUncommittedFiles;
-(char)hasCrashMarker;
-(char)storeData:(id)arg1 identity:(id)arg2 isOriginal:(char)arg3 needsCommit:(char*)arg4 error:(id*)arg5 ;
-(char)tryToFreeDiskSpace:(unsigned long long)arg1 actuallyFreedSpace:(unsigned long long*)arg2 error:(id*)arg3 ;
-(id)fileEnumerator;
-(char)keepOriginals;
-(void)setKeepOriginals:(char)arg1 ;
-(char)deleteImmediately;
-(void)setDeleteImmediately:(char)arg1 ;
-(id)initWithBaseURL:(id)arg1 ;
@end

