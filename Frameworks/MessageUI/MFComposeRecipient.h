/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:32:46 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MFDraggableItem.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray, CNAutocompleteResult, CNContact, MFComposeRecipientOriginContext;

@interface MFComposeRecipient : NSObject <NSCopying, MFDraggableItem, NSCoding> {

	void* _record;
	int _recordID;
	int _property;
	int _identifier;
	NSString* _address;
	NSString* _label;
	NSString* _countryCode;
	NSString* _displayString;
	unsigned _sourceType;
	NSArray* _cachedCompleteMatches;
	NSArray* _cachedMatchedStrings;
	NSArray* _cachedSortedMembers;
	CNAutocompleteResult* _autocompleteResult;
	CNContact* _contact;
	NSString* _contactIdentifier;
	NSString* _valueIdentifier;
	NSString* _compositeName;
	NSString* _unlocalizedLabel;
	MFComposeRecipientOriginContext* _originContext;
	unsigned _kind;

}

@property (nonatomic,readonly) MFComposeRecipientOriginContext * originContext;                                  //@synthesize originContext=_originContext - In the implementation block
@property (getter=isRemovableFromSearchResults,nonatomic,readonly) char removableFromSearchResults; 
@property (nonatomic,readonly) char showsAccessoryButton; 
@property (nonatomic,readonly) char isGroup; 
@property (assign,nonatomic) unsigned sourceType;                                                                //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                                                //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) char isSuggestedRecipient; 
@property (nonatomic,readonly) char isDirectoryServerResult; 
@property (nonatomic,copy) NSString * address; 
@property (nonatomic,readonly) NSString * normalizedAddress; 
@property (nonatomic,readonly) NSString * commentedAddress; 
@property (nonatomic,readonly) NSString * uncommentedAddress; 
@property (nonatomic,readonly) unsigned kind;                                                                    //@synthesize kind=_kind - In the implementation block
@property (nonatomic,retain) NSString * label;                                                                   //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * unlocalizedLabel;                                                        //@synthesize unlocalizedLabel=_unlocalizedLabel - In the implementation block
@property (nonatomic,readonly) NSString * placeholderName; 
@property (nonatomic,readonly) NSString * compositeName; 
@property (nonatomic,readonly) NSString * shortName; 
@property (nonatomic,retain) NSString * displayString;                                                           //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,retain) NSString * countryCode;                                                             //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSString * contactIdentifier;                                                       //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,retain) NSString * valueIdentifier;                                                         //@synthesize valueIdentifier=_valueIdentifier - In the implementation block
@property (nonatomic,retain) CNAutocompleteResult * autocompleteResult;                                          //@synthesize autocompleteResult=_autocompleteResult - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_requiredKeyDescriptors;
+(id)composeRecipientWithAutocompleteResult:(id)arg1 ;
+(id)recipientWithRecord:(void*)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4 ;
+(id)mf_recipientWithGALResult:(id)arg1 ;
+(id)recipientWithProperty:(int)arg1 address:(id)arg2 ;
+(id)recipientWithRecord:(void*)arg1 property:(int)arg2 identifier:(int)arg3 ;
-(void)setContact:(CNContact *)arg1 ;
-(CNContact *)contact;
-(NSString *)contactIdentifier;
-(id)initWithContact:(id)arg1 address:(id)arg2 kind:(unsigned)arg3 ;
-(void)setValueIdentifier:(NSString *)arg1 ;
-(void)setUnlocalizedLabel:(NSString *)arg1 ;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(char)isSuggestedRecipient;
-(NSString *)placeholderName;
-(id)_unformattedAddress;
-(id)sortedChildren;
-(id)childrenWithCompleteMatches;
-(char)showsAccessoryButton;
-(char)wasCompleteMatch;
-(char)isDirectoryServerResult;
-(id)completelyMatchedAttributedStrings;
-(id)preferredSendingAddress;
-(NSString *)normalizedAddress;
-(NSString *)shortName;
-(id)labeledValueIdentifier;
-(MFComposeRecipientOriginContext *)originContext;
-(NSString *)valueIdentifier;
-(NSString *)address;
-(void*)record;
-(NSString *)uncommentedAddress;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(void)setDisplayString:(NSString *)arg1 ;
-(NSString *)displayString;
-(int)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(int)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned)sourceType;
-(void)setSourceType:(unsigned)arg1 ;
-(char)isGroup;
-(unsigned)kind;
-(NSString *)compositeName;
-(NSString *)commentedAddress;
-(char)isRemovableFromSearchResults;
-(id)initWithRecord:(void*)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4 address:(id)arg5 ;
-(NSString *)unlocalizedLabel;
-(id)supportedDragTypes;
-(id)objectForDragType:(id)arg1 ;
-(void)setRecord:(void*)arg1 recordID:(int)arg2 identifier:(int)arg3 ;
-(void)setOriginContext:(MFComposeRecipientOriginContext *)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(CNAutocompleteResult *)autocompleteResult;
-(void)setAutocompleteResult:(CNAutocompleteResult *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)countryCode;
-(id)children;
-(int)recordID;
-(int)property;
@end

