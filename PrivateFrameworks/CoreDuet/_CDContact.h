/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _CDContactStatistics;

@interface _CDContact : NSObject <NSCopying, NSSecureCoding> {

	unsigned _type;
	NSString* _identifier;
	NSString* _personId;
	unsigned _personIdType;
	NSString* _displayName;
	_CDContactStatistics* _statistics;

}

@property (retain) NSString * identifierType; 
@property (assign) unsigned type;                                  //@synthesize type=_type - In the implementation block
@property (retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * personId;                            //@synthesize personId=_personId - In the implementation block
@property (assign) unsigned personIdType;                          //@synthesize personIdType=_personIdType - In the implementation block
@property (retain) NSString * displayName;                         //@synthesize displayName=_displayName - In the implementation block
@property (retain) _CDContactStatistics * statistics;              //@synthesize statistics=_statistics - In the implementation block
+(char)supportsSecureCoding;
+(unsigned)typeFromString:(id)arg1 ;
+(id)contactWithIdentifier:(id)arg1 type:(unsigned)arg2 displayName:(id)arg3 personId:(id)arg4 personIdType:(unsigned)arg5 ;
+(id)typeAsCNContactPropertyKey:(unsigned)arg1 ;
+(id)predicateForContactWithType:(unsigned)arg1 ;
+(id)predicateForContactWithPersonId:(id)arg1 personIdType:(unsigned)arg2 ;
+(id)predicateForContactWithIdentifier:(id)arg1 ;
+(id)predicateForContactWithDisplayName:(id)arg1 ;
+(id)predicateForContact:(id)arg1 ;
+(id)contactPropertiesForContacts:(id)arg1 ;
+(id)contactPropertiesForContacts:(id)arg1 mechanismHints:(id)arg2 ;
+(id)_contactPropertiesForContacts:(id)arg1 mechanismHints:(id)arg2 ;
+(id)_CDValueForContactProperty:(id)arg1 ;
+(id)contactWithIdentifier:(id)arg1 identifierType:(id)arg2 personId:(id)arg3 personIdType:(unsigned)arg4 ;
+(id)contactWithIdentifier:(id)arg1 identifierType:(id)arg2 displayName:(id)arg3 personId:(id)arg4 personIdType:(unsigned)arg5 ;
+(id)normalizedStringKey:(id)arg1 ;
+(id)contactWithIdentifier:(id)arg1 identifierType:(id)arg2 ;
-(id)contactProperty;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)compare:(id)arg1 ;
-(NSString *)identifier;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)displayName;
-(NSString *)identifierType;
-(void)setIdentifierType:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 type:(unsigned)arg2 displayName:(id)arg3 personId:(id)arg4 personIdType:(unsigned)arg5 ;
-(NSString *)personId;
-(void)setPersonId:(NSString *)arg1 ;
-(unsigned)personIdType;
-(void)setPersonIdType:(unsigned)arg1 ;
-(char)mayRepresentSamePersonAs:(id)arg1 ;
-(void)mergeWithContact:(id)arg1 ;
-(char)mayContainPrefix:(id)arg1 ;
-(id)initWithContactProperty:(id)arg1 ;
-(id)contactPropertyWithMechanismHint:(int)arg1 ;
-(id)contactPropertyWithOptionalMechanismHint:(int*)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(_CDContactStatistics *)statistics;
-(void)setStatistics:(_CDContactStatistics *)arg1 ;
@end

