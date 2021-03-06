/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <backupd/backupd-Structs.h>
@class NSString;

@interface MBFileHandle : NSObject

@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) int fd; 
-(char)validateEncryptionKey:(id)arg1 error:(id*)arg2 ;
-(id)encryptionKeyWithError:(id*)arg1 ;
-(char)readFromPath:(id)arg1 error:(id*)arg2 ;
-(char)statWithBuffer:(stat*)arg1 error:(id*)arg2 ;
-(int)writeWithBytes:(const void*)arg1 length:(unsigned)arg2 error:(id*)arg3 ;
-(int)readWithBytes:(void*)arg1 length:(unsigned)arg2 error:(id*)arg3 ;
-(char)writeToPath:(id)arg1 error:(id*)arg2 ;
-(int)fd;
-(NSString *)path;
-(char)closeWithError:(id*)arg1 ;
@end

