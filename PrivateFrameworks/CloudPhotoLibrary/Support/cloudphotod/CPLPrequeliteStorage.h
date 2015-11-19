/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLPlatformObject.h>
#import <cloudphotod/CPLEngineStorageImplementation.h>

@class CPLPrequeliteTable, NSString;

@interface CPLPrequeliteStorage : CPLPlatformObject <CPLEngineStorageImplementation> {

	CPLPrequeliteTable* _mainTable;
	char _superWasCalled;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)pqStore;
-(char)createIndexWithName:(id)arg1 withDefinition:(id)arg2 unique:(char)arg3 error:(id*)arg4 ;
-(id)mainTable;
-(char)createMainTableWithDefinition:(id)arg1 error:(id*)arg2 ;
-(char)createVariable:(id)arg1 defaultValue:(id)arg2 error:(id*)arg3 ;
-(char)setValue:(id)arg1 forVariable:(id)arg2 error:(id*)arg3 ;
-(char)createIndexOnColumn:(id)arg1 error:(id*)arg2 ;
-(id)variableWithName:(id)arg1 type:(id)arg2 ;
-(char)initializeStorage;
-(char)upgradeStorageToVersion:(long long)arg1 ;
-(id)valueForVariable:(id)arg1 ;
-(id)status;
-(char)openWithError:(id*)arg1 ;
-(char)closeWithError:(id*)arg1 ;
-(id)engineLibrary;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(char)_checkSuperWasCalled;
-(id)statusDictionary;
-(id)initWithAbstractObject:(id)arg1 ;
@end

