/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:35 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPLAbstractObject.h>
#import <libobjc.A.dylib/CPLEngineComponent.h>

@class CPLPlatformObject, CPLEngineLibrary, NSString;

@interface CPLEngineTransport : NSObject <CPLAbstractObject, CPLEngineComponent> {

	CPLPlatformObject* _platformObject;
	CPLEngineLibrary* _engineLibrary;

}

@property (nonatomic,__weak,readonly) CPLEngineLibrary * engineLibrary;              //@synthesize engineLibrary=_engineLibrary - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject;                   //@synthesize platformObject=_platformObject - In the implementation block
+(id)platformImplementationProtocol;
-(id)componentName;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(CPLEngineLibrary *)engineLibrary;
-(CPLPlatformObject *)platformObject;
-(void)closeAndDeactivate:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getStatusDictionaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithEngineLibrary:(id)arg1 ;
-(id)setupTaskCreateLibraryIfNecessary:(char)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)uploadBatchTaskForBatch:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)downloadBatchTaskForSyncAnchor:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)getAssetCountsTaskWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)resourceDownloadTaskForResource:(id)arg1 clientBundleID:(id)arg2 didStartHandler:(/*^block*/id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(char)canBatchResourceDownloadTasks:(id)arg1 :(id)arg2 ;
-(void)runResourceDownloadTasks:(id)arg1 ;
-(id)resourcePublishTaskForResource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)removeLibraryTaskWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)supportsDelayedUploads;
-(id)resourceUploadTaskForResource:(id)arg1 ofRecord:(id)arg2 didStartHandler:(/*^block*/id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)bestErrorForUnderlyingError:(id)arg1 ;
-(id)simpleDataForSyncAnchor:(id)arg1 ;
-(void)noteClientIsInForeground;
-(void)noteClientIsInBackground;
@end

