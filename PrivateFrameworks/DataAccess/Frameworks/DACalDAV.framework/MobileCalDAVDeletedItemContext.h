/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSNumber;

@interface MobileCalDAVDeletedItemContext : NSObject {

	NSNumber* _rowid;
	int _entityType;

}

@property (nonatomic,retain) NSNumber * rowid;              //@synthesize rowid=_rowid - In the implementation block
@property (assign,nonatomic) int entityType;                //@synthesize entityType=_entityType - In the implementation block
-(void)setEntityType:(int)arg1 ;
-(int)entityType;
-(void)setRowid:(NSNumber *)arg1 ;
-(NSNumber *)rowid;
@end

