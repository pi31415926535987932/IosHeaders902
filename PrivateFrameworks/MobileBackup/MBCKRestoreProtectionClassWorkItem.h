/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/MBCKPostRestoreWorkItem.h>

@class MBCKFile;

@interface MBCKRestoreProtectionClassWorkItem : MBCKPostRestoreWorkItem {

	MBCKFile* _file;

}

@property (nonatomic,retain) MBCKFile * file;              //@synthesize file=_file - In the implementation block
+(id)workItemWithFile:(id)arg1 ;
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)main;
-(id)initWithFile:(id)arg1 ;
-(void)setFile:(MBCKFile *)arg1 ;
-(MBCKFile *)file;
@end

