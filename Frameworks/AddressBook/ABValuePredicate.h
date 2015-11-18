/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:18:54 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABPredicate.h>

@protocol NSObject;
@class NSArray, NSObject;

@interface ABValuePredicate : ABPredicate {

	int _property;
	long _comparison;
	id<NSObject> _value;
	NSArray* _orderedKeys;
	char _dictionaryValue;

}

@property (assign,nonatomic) int property;                 //@synthesize property=_property - In the implementation block
@property (assign,nonatomic) long comparison;              //@synthesize comparison=_comparison - In the implementation block
@property (nonatomic,copy) NSObject * value;               //@synthesize value=_value - In the implementation block
+(id)stringForComparison:(id)arg1 withComparision:(long)arg2 ;
-(id)queryWhereStringForPredicateIdentifier:(int)arg1 ;
-(void)ab_bindWhereClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(id)querySelectPropertiesForPredicateIdentifier:(int)arg1 ;
-(id)queryJoinsInCompound:(char)arg1 predicateIdentifier:(int)arg2 ;
-(char)_shouldConsultIndexForKey:(id)arg1 ;
-(char)_supportsFTSSearch;
-(char)_allowsLaxCheckingForFTS;
-(id)_ftsTermStringForString:(id)arg1 ;
-(id)stringForComparison:(id)arg1 ;
-(id)_ftsAllQueryStrings;
-(id)_ftsTokenizedTermStringForString:(id)arg1 ;
-(id)predicateFormat;
-(void)setProperty:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isValid;
-(NSObject *)value;
-(void)setValue:(NSObject *)arg1 ;
-(long)comparison;
-(void)setComparison:(long)arg1 ;
-(int)property;
@end

