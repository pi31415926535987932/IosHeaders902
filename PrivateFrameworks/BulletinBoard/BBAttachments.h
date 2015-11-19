/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSCountedSet, NSMutableDictionary;

@interface BBAttachments : NSObject <NSCopying, NSSecureCoding> {

	int primaryType;
	NSCountedSet* _additionalAttachments;
	NSMutableDictionary* _clientSideComposedImageInfos;

}

@property (assign,nonatomic) int primaryType; 
@property (nonatomic,retain) NSCountedSet * additionalAttachments;                            //@synthesize additionalAttachments=_additionalAttachments - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * clientSideComposedImageInfos;              //@synthesize clientSideComposedImageInfos=_clientSideComposedImageInfos - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)primaryType;
-(unsigned)numberOfAdditionalAttachments;
-(unsigned)numberOfAdditionalAttachmentsOfType:(int)arg1 ;
-(void)setPrimaryType:(int)arg1 ;
-(void)addAttachmentOfType:(int)arg1 ;
-(char)isEqualToAttachments:(id)arg1 ;
-(NSCountedSet *)additionalAttachments;
-(void)setAdditionalAttachments:(NSCountedSet *)arg1 ;
-(NSMutableDictionary *)clientSideComposedImageInfos;
-(void)setClientSideComposedImageInfos:(NSMutableDictionary *)arg1 ;
@end

