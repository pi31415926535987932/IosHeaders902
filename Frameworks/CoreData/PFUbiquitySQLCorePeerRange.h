/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:45:49 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface PFUbiquitySQLCorePeerRange : NSObject {

	NSString* _owningPeerID;
	NSString* _entityName;
	NSNumber* _rangeStart;
	NSNumber* _rangeEnd;
	NSNumber* _peerStart;
	NSNumber* _peerEnd;

}

@property (nonatomic,readonly) NSString * owningPeerID;              //@synthesize owningPeerID=_owningPeerID - In the implementation block
@property (nonatomic,readonly) NSString * entityName;                //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,readonly) NSNumber * rangeStart;                //@synthesize rangeStart=_rangeStart - In the implementation block
@property (nonatomic,readonly) NSNumber * rangeEnd;                  //@synthesize rangeEnd=_rangeEnd - In the implementation block
@property (nonatomic,readonly) NSNumber * peerStart;                 //@synthesize peerStart=_peerStart - In the implementation block
@property (nonatomic,readonly) NSNumber * peerEnd;                   //@synthesize peerEnd=_peerEnd - In the implementation block
-(NSString *)owningPeerID;
-(NSNumber *)rangeStart;
-(NSNumber *)rangeEnd;
-(NSNumber *)peerStart;
-(NSNumber *)peerEnd;
-(id)initWithOwningPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerStart:(id)arg5 peerEnd:(id)arg6 ;
-(void)dealloc;
-(id)description;
-(NSString *)entityName;
@end

