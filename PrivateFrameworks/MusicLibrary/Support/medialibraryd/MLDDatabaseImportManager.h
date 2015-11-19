/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:23 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSOperationQueue, NSMutableArray, NSError;

@interface MLDDatabaseImportManager : NSObject {

	NSOperationQueue* _importOperationQueue;
	NSMutableArray* _suspendedImportOperations;
	NSError* _lastImportError;

}

@property (nonatomic,retain) NSError * lastImportError;                        //@synthesize lastImportError=_lastImportError - In the implementation block
@property (nonatomic,readonly) unsigned operationsCount; 
@property (nonatomic,readonly) unsigned suspendedOperationsCount; 
-(void)_handleImportOperationCancelled:(id)arg1 ;
-(void)_handleImportOperationCompleted:(id)arg1 ;
-(void)performImport:(id)arg1 fromSource:(unsigned)arg2 progressBlock:(/*^block*/id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(unsigned)operationsCount;
-(unsigned)suspendedOperationsCount;
-(float)currentOperationProgressWithError:(id*)arg1 ;
-(void)cancelAllImportOperations;
-(void)cancelImportOperationsOriginatingFromClient:(id)arg1 ;
-(void)cancelImportOperationsForSource:(unsigned)arg1 ;
-(void)suspendImportOperations;
-(void)resumeSuspendedImportOperations;
-(id)_importOperations;
-(id)_suspendedImportOperations;
-(void)_handleImportOperationProgressChanged:(id)arg1 ;
-(NSError *)lastImportError;
-(void)setLastImportError:(NSError *)arg1 ;
-(id)init;
@end

