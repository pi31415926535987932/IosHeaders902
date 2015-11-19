/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NPKTransientPassAssertionConnection, NSString;

@interface NPKTransientPassRequest : NSObject {

	NPKTransientPassAssertionConnection* _owningConnection;
	NSString* _uniqueID;

}

@property (assign,nonatomic,__weak) NPKTransientPassAssertionConnection * owningConnection;              //@synthesize owningConnection=_owningConnection - In the implementation block
@property (nonatomic,retain) NSString * uniqueID;                                                        //@synthesize uniqueID=_uniqueID - In the implementation block
-(NSString *)uniqueID;
-(NPKTransientPassAssertionConnection *)owningConnection;
-(void)setOwningConnection:(NPKTransientPassAssertionConnection *)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
@end

