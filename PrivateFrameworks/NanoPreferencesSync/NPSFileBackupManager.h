/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/nanoprefsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NPSDeviceRegistry, NSMutableDictionary;

@interface NPSFileBackupManager : NSObject {

	NPSDeviceRegistry* _deviceRegistry;
	NSMutableDictionary* _metadataIndex;

}

@property (nonatomic,retain) NPSDeviceRegistry * deviceRegistry;               //@synthesize deviceRegistry=_deviceRegistry - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * metadataIndex;              //@synthesize metadataIndex=_metadataIndex - In the implementation block
-(id)metadataIndexReadFromDiskIfNeeded;
-(void)persistMetadataIndex;
-(NSMutableDictionary *)metadataIndex;
-(void)setMetadataIndex:(NSMutableDictionary *)arg1 ;
-(id)initWithDeviceRegistry:(id)arg1 ;
-(void)backupFileAtURL:(id)arg1 originalFileURL:(id)arg2 ;
-(void)enumerateFileBackupsUsingBlock:(/*^block*/id)arg1 ;
-(id)localFileURLForOriginalFileURL:(id)arg1 ;
-(NPSDeviceRegistry *)deviceRegistry;
-(void)setDeviceRegistry:(NPSDeviceRegistry *)arg1 ;
-(id)newFileUUID;
-(id)pathToFileWithUUID:(id)arg1 ;
-(id)fileURLWithUUID:(id)arg1 ;
@end
