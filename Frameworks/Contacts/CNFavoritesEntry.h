/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:43:36 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNContactChangesObserver.h>

@class NSString, CNContact, CNContactStore, CNContactProperty;

@interface CNFavoritesEntry : NSObject <CNContactChangesObserver> {

	NSString* _name;
	char _dirty;
	int _type;
	CNContact* _contact;
	NSString* _label;
	NSString* _value;
	NSString* _identifier;
	NSString* _propertyKey;
	CNContactStore* _store;
	int _abUid;
	int _abIdentifier;
	NSString* _abDatabaseUUID;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) CNContactProperty * contactProperty; 
@property (assign,nonatomic) int type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) NSString * label;                                   //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * value;                                   //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * propertyKey;                             //@synthesize propertyKey=_propertyKey - In the implementation block
@property (nonatomic,retain) CNContactStore * store;                             //@synthesize store=_store - In the implementation block
@property (assign,nonatomic) int abUid;                                          //@synthesize abUid=_abUid - In the implementation block
@property (assign,nonatomic) int abIdentifier;                                   //@synthesize abIdentifier=_abIdentifier - In the implementation block
@property (nonatomic,retain) NSString * abDatabaseUUID;                          //@synthesize abDatabaseUUID=_abDatabaseUUID - In the implementation block
@property (assign,nonatomic) char dirty;                                         //@synthesize dirty=_dirty - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)labeledValueValueForFavoritesEntryValue:(id)arg1 propertyKey:(id)arg2 ;
+(id)sharedContactStore;
+(id)favoritesEntryValueForLabeledValueValue:(id)arg1 propertyKey:(id)arg2 ;
+(id)descriptorsForRequiredKeysForPropertyKey:(id)arg1 ;
+(id)createLabeledValueForFavoritesEntryValue:(id)arg1 label:(id)arg2 iOSLegacyIdentifier:(int)arg3 propertyKey:(id)arg4 ;
+(void)_runLookup;
+(id)contactFormatter;
-(NSString *)abDatabaseUUID;
-(id)initWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 type:(int)arg4 store:(id)arg5 ;
-(void)setPropertyKey:(NSString *)arg1 ;
-(void)setAbUid:(int)arg1 ;
-(void)setAbIdentifier:(int)arg1 ;
-(void)setAbDatabaseUUID:(NSString *)arg1 ;
-(void)_unqueueLookup;
-(void)_postEntryChanged;
-(int)abUid;
-(int)abIdentifier;
-(void)_queueLookup;
-(void)_lookupNotFound;
-(void)_lookupChanged:(id)arg1 ;
-(void)recheckContactStore;
-(id)initWithDictionaryRepresentation:(id)arg1 store:(id)arg2 ;
-(void)dictionaryRepresentation:(id*)arg1 isDirty:(char*)arg2 ;
-(CNContactProperty *)contactProperty;
-(void)contactDidChange:(id)arg1 ;
-(id)initWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 type:(int)arg4 ;
-(CNContactStore *)store;
-(void)setStore:(CNContactStore *)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(CNContact *)contact;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDirty:(char)arg1 ;
-(char)dirty;
-(NSString *)propertyKey;
@end

