/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>
#import <DAEAS/DAMailMessageAttachment.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSNumber;

@interface ASAttachment : ASItem <DAMailMessageAttachment, NSCoding> {

	NSString* _name;
	NSNumber* _size;
	NSNumber* _method;
	NSString* _displayName;
	NSString* _contentId;
	NSString* _contentLocation;
	NSNumber* _isInline;
	NSNumber* _hasBase64Transfer;
	NSString* _clientId;

}

@property (nonatomic,copy) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSNumber * size;                           //@synthesize size=_size - In the implementation block
@property (nonatomic,copy) NSNumber * method;                         //@synthesize method=_method - In the implementation block
@property (nonatomic,copy) NSString * displayName;                    //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * contentId;                      //@synthesize contentId=_contentId - In the implementation block
@property (nonatomic,copy) NSString * contentLocation;                //@synthesize contentLocation=_contentLocation - In the implementation block
@property (nonatomic,copy) NSNumber * isInline;                       //@synthesize isInline=_isInline - In the implementation block
@property (nonatomic,copy) NSNumber * hasBase64Transfer;              //@synthesize hasBase64Transfer=_hasBase64Transfer - In the implementation block
@property (nonatomic,copy) NSString * clientId;                       //@synthesize clientId=_clientId - In the implementation block
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSNumber *)isInline;
-(void)setIsInline:(NSNumber *)arg1 ;
-(NSNumber *)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setSize:(NSNumber *)arg1 ;
-(NSNumber *)method;
-(NSString *)displayName;
-(void)setPercentEscapedName:(id)arg1 ;
-(void)setContentId:(NSString *)arg1 ;
-(void)setContentLocation:(NSString *)arg1 ;
-(void)setHasBase64Transfer:(NSNumber *)arg1 ;
-(NSNumber *)hasBase64Transfer;
-(NSString *)contentLocation;
-(char)isMostDefinitelyBase64ed;
-(void)setMethod:(NSNumber *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)contentId;
-(void)setClientId:(NSString *)arg1 ;
-(NSString *)clientId;
@end

