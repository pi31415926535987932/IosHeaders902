/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:23:56 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKNotification.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CKMetaSyncNotification : CKNotification <NSSecureCoding> {

	int _databaseScope;

}

@property (assign,nonatomic) int databaseScope;              //@synthesize databaseScope=_databaseScope - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithRemoteNotificationDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setDatabaseScope:(int)arg1 ;
-(id)CKPropertiesDescription;
-(int)databaseScope;
@end
