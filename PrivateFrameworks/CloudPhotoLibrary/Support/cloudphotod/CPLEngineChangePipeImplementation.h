/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CPLEngineChangePipeImplementation <CPLEngineStorageImplementation>
@property (assign,getter=isLocked,nonatomic) char locked; 
@required
-(char)isLocked;
-(void)setLocked:(char)arg1;
-(char)deleteAllChangeBatchesWithError:(id*)arg1;
-(unsigned)countOfQueuedBatches;
-(char)appendChangeBatch:(id)arg1 error:(id*)arg2;
-(char)popChangeBatch:(id*)arg1 error:(id*)arg2;
-(char)markChangesWithIdentifier:(id)arg1 withAlterationType:(unsigned)arg2 error:(id*)arg3;
-(id)nextBatch;
-(char)popNextBatchWithError:(id*)arg1;
-(char)compactChangeBatchesWithError:(id*)arg1;
-(id)allChangeBatches;

@end

