/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/MBMMCSItemReaderInfo.h>

@class NSString, MBKeyBagFile, NSData;

@interface MBMMCSEncryptedItemReaderInfo : NSObject <MBMMCSItemReaderInfo> {

	NSString* _path;
	MBKeyBagFile* _keybagFile;
	NSData* _encryptedKey;
	unsigned long long _itemID;

}

@property (assign,nonatomic) unsigned long long itemID;              //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) NSString * path;                        //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) MBKeyBagFile * keybagFile;              //@synthesize keybagFile=_keybagFile - In the implementation block
@property (nonatomic,retain) NSData * encryptedKey;                  //@synthesize encryptedKey=_encryptedKey - In the implementation block
-(void)setEncryptedKey:(NSData *)arg1 ;
-(NSData *)encryptedKey;
-(id)initWithItemID:(unsigned long long)arg1 path:(id)arg2 encryptedKey:(id)arg3 ;
-(char)statWithSize:(unsigned long long*)arg1 error:(id*)arg2 ;
-(char)readWithOffset:(unsigned long long)arg1 buffer:(char*)arg2 bufferLength:(unsigned long long)arg3 bytesRead:(unsigned long long*)arg4 error:(id*)arg5 ;
-(MBKeyBagFile *)keybagFile;
-(void)setKeybagFile:(MBKeyBagFile *)arg1 ;
-(unsigned long long)itemID;
-(void)dealloc;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(void)setItemID:(unsigned long long)arg1 ;
-(char)openWithError:(id*)arg1 ;
-(char)closeWithError:(id*)arg1 ;
@end

