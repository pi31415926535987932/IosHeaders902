/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class BBBulletin;

@interface BBObserverBulletinUpdate : NSObject <NSSecureCoding> {

	BBBulletin* _bulletin;
	unsigned _transactionID;
	int _updateType;

}

@property (nonatomic,retain,readonly) BBBulletin * bulletin;              //@synthesize bulletin=_bulletin - In the implementation block
@property (nonatomic,readonly) int updateType;                            //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,readonly) unsigned transactionID;                    //@synthesize transactionID=_transactionID - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithBulletin:(id)arg1 updateType:(int)arg2 transactionID:(unsigned)arg3 ;
-(BBBulletin *)bulletin;
-(unsigned)transactionID;
-(int)updateType;
@end

