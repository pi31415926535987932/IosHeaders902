/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:43:36 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, CNFavoritesEntry;

@interface CNFavoritesEntrySnapshot : NSObject {

	NSString* _value;
	NSString* _name;
	NSString* _label;
	NSString* _abDatabaseUUID;
	NSString* _propertyKey;
	NSString* _identifier;
	int _abIdentifier;
	int _abUid;
	CNFavoritesEntry* _originalEntry;

}

@property (nonatomic,copy) NSString * value;                                  //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * label;                                  //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * abDatabaseUUID;                         //@synthesize abDatabaseUUID=_abDatabaseUUID - In the implementation block
@property (nonatomic,copy) NSString * propertyKey;                            //@synthesize propertyKey=_propertyKey - In the implementation block
@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) int abIdentifier;                                //@synthesize abIdentifier=_abIdentifier - In the implementation block
@property (assign,nonatomic) int abUid;                                       //@synthesize abUid=_abUid - In the implementation block
@property (nonatomic,readonly) CNFavoritesEntry * originalEntry;              //@synthesize originalEntry=_originalEntry - In the implementation block
-(NSString *)abDatabaseUUID;
-(void)setPropertyKey:(NSString *)arg1 ;
-(void)setAbUid:(int)arg1 ;
-(void)setAbIdentifier:(int)arg1 ;
-(void)setAbDatabaseUUID:(NSString *)arg1 ;
-(int)abUid;
-(int)abIdentifier;
-(CNFavoritesEntry *)originalEntry;
-(id)initWithOriginalEntry:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)propertyKey;
@end

