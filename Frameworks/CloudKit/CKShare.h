/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:23:55 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKShareID, NSURL, CKContainerID, NSString, NSMutableArray, NSData, NSArray, CKShareParticipant;

@interface CKShare : NSObject <NSSecureCoding, NSCopying> {

	char _isKnownToServer;
	CKShareID* _shareID;
	NSURL* _shareURL;
	int _publicPermission;
	CKContainerID* _containerID;
	NSString* _etag;
	NSMutableArray* _participants;
	NSData* _publicSharingIdentity;
	NSString* _routingKey;
	NSString* _baseToken;
	NSData* _protectionData;
	NSString* _protectionEtag;
	NSString* _previousProtectionEtag;
	NSData* _publicProtectionData;
	NSString* _publicProtectionEtag;
	NSString* _previousPublicProtectionEtag;
	NSMutableArray* _addedParticipants;
	NSMutableArray* _removedParticipants;

}

@property (nonatomic,copy) CKShareID * shareID;                                          //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * shareURL;                                    //@synthesize shareURL=_shareURL - In the implementation block
@property (assign,nonatomic) int publicPermission;                                       //@synthesize publicPermission=_publicPermission - In the implementation block
@property (nonatomic,readonly) NSArray * allParticipants; 
@property (nonatomic,readonly) CKShareParticipant * owner; 
@property (nonatomic,retain) CKContainerID * containerID;                                //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,copy) NSString * etag;                                              //@synthesize etag=_etag - In the implementation block
@property (assign,nonatomic) char isKnownToServer;                                       //@synthesize isKnownToServer=_isKnownToServer - In the implementation block
@property (nonatomic,retain) NSMutableArray * participants;                              //@synthesize participants=_participants - In the implementation block
@property (nonatomic,readonly) CKShareParticipant * currentUserParticipant; 
@property (nonatomic,retain) NSData * publicSharingIdentity;                             //@synthesize publicSharingIdentity=_publicSharingIdentity - In the implementation block
@property (nonatomic,retain) NSString * routingKey;                                      //@synthesize routingKey=_routingKey - In the implementation block
@property (nonatomic,retain) NSString * baseToken;                                       //@synthesize baseToken=_baseToken - In the implementation block
@property (nonatomic,readonly) NSString * fullToken; 
@property (nonatomic,readonly) NSData * shortSharingTokenData; 
@property (nonatomic,readonly) NSData * shortSharingTokenHashData; 
@property (nonatomic,readonly) NSData * encryptedFullTokenData; 
@property (nonatomic,retain) NSData * protectionData;                                    //@synthesize protectionData=_protectionData - In the implementation block
@property (nonatomic,retain) NSString * protectionEtag;                                  //@synthesize protectionEtag=_protectionEtag - In the implementation block
@property (nonatomic,retain) NSString * previousProtectionEtag;                          //@synthesize previousProtectionEtag=_previousProtectionEtag - In the implementation block
@property (nonatomic,retain) NSData * publicProtectionData;                              //@synthesize publicProtectionData=_publicProtectionData - In the implementation block
@property (nonatomic,retain) NSString * publicProtectionEtag;                            //@synthesize publicProtectionEtag=_publicProtectionEtag - In the implementation block
@property (nonatomic,retain) NSString * previousPublicProtectionEtag;                    //@synthesize previousPublicProtectionEtag=_previousPublicProtectionEtag - In the implementation block
@property (nonatomic,retain) NSMutableArray * addedParticipants;                         //@synthesize addedParticipants=_addedParticipants - In the implementation block
@property (nonatomic,retain) NSMutableArray * removedParticipants;                       //@synthesize removedParticipants=_removedParticipants - In the implementation block
+(id)encryptFullToken:(id)arg1 shortSharingTokenData:(id)arg2 ;
+(char)supportsSecureCoding;
+(id)decryptFullToken:(id)arg1 shortSharingTokenData:(id)arg2 ;
-(void)CKAssignToContainerWithID:(id)arg1 ;
-(void)clearModifiedParticipants;
-(NSMutableArray *)addedParticipants;
-(void)setAddedParticipants:(NSMutableArray *)arg1 ;
-(NSMutableArray *)removedParticipants;
-(void)setRemovedParticipants:(NSMutableArray *)arg1 ;
-(id)_knownParticipantEqualToParticipant:(id)arg1 inArray:(id)arg2 ;
-(NSString *)fullToken;
-(id)shortToken;
-(id)removeParticipant:(id)arg1 ;
-(id)decryptFullToken:(id)arg1 ;
-(void)setParticipants:(NSMutableArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)participants;
-(id)iWorkShareURLWithAppName:(id)arg1 documentName:(id)arg2 error:(id*)arg3 ;
-(id)CKPropertiesDescription;
-(void)setProtectionData:(NSData *)arg1 ;
-(void)setProtectionEtag:(NSString *)arg1 ;
-(NSData *)protectionData;
-(NSString *)protectionEtag;
-(void)setPreviousProtectionEtag:(NSString *)arg1 ;
-(CKShareID *)shareID;
-(NSData *)publicProtectionData;
-(int)publicPermission;
-(CKShareParticipant *)currentUserParticipant;
-(void)setPublicPermission:(int)arg1 ;
-(NSString *)publicProtectionEtag;
-(NSData *)shortSharingTokenData;
-(NSString *)routingKey;
-(void)setRoutingKey:(NSString *)arg1 ;
-(NSData *)shortSharingTokenHashData;
-(id)shortSharingToken;
-(NSString *)previousProtectionEtag;
-(void)setShareID:(CKShareID *)arg1 ;
-(NSData *)encryptedFullTokenData;
-(void)updateFromServerShare:(id)arg1 ;
-(id)initWithShareID:(id)arg1 ;
-(NSString *)baseToken;
-(void)setBaseToken:(NSString *)arg1 ;
-(NSData *)publicSharingIdentity;
-(void)setPublicSharingIdentity:(NSData *)arg1 ;
-(void)setIsKnownToServer:(char)arg1 ;
-(void)setPublicProtectionData:(NSData *)arg1 ;
-(void)setPublicProtectionEtag:(NSString *)arg1 ;
-(void)setPreviousPublicProtectionEtag:(NSString *)arg1 ;
-(NSArray *)allParticipants;
-(id)addParticipant:(id)arg1 ;
-(NSURL *)shareURL;
-(NSString *)previousPublicProtectionEtag;
-(id)privateToken;
-(char)isKnownToServer;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(CKContainerID *)containerID;
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(CKShareParticipant *)owner;
@end

