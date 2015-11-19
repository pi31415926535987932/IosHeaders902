/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <cloudphotod/CPLPrequeliteStorage.h>
#import <cloudphotod/CPLEngineResourceStorageImplementation.h>

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteResourceStorage : CPLPrequeliteStorage <CPLEngineResourceStorageImplementation> {

	CPLPrequeliteVariable* _totalSizeVar;
	CPLPrequeliteVariable* _totalOriginalSizeVar;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)initializeStorage;
-(char)upgradeStorageToVersion:(long long)arg1 ;
-(char)_incrementTotalResourceSize:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)_incrementTotalOriginalResourceSize:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)_decrementTotalResourceSize:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)_decrementTotalOriginalResourceSize:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)status;
-(unsigned)retainCountForIdentity:(id)arg1 ;
-(char)retainIdentity:(id)arg1 isTrackedOriginal:(char)arg2 error:(id*)arg3 ;
-(char)releaseIdentity:(id)arg1 lastReference:(char*)arg2 isTrackedOriginal:(char)arg3 error:(id*)arg4 ;
-(unsigned long long)totalResourceSize;
-(unsigned long long)totalOriginalResourceSize;
-(void)enumerateIdentitiesWithBlock:(/*^block*/id)arg1 ;
-(char)resetWithError:(id*)arg1 ;
-(id)initWithAbstractObject:(id)arg1 ;
@end

