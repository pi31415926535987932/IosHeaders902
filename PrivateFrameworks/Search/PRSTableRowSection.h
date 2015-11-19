/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol PRSTableRowSection <PRSSection>
@property (nonatomic,retain) NSString * table_id; 
@property (nonatomic,retain) NSString * tab_group_id; 
@property (nonatomic,retain) id<PRSAlignmentSchema> alignment_schema; 
@property (assign,nonatomic) int row_type; 
@property (nonatomic,retain) NSArray * value; 
@optional
-(NSArray *)value;
-(void)setValue:(id)arg1;
-(void)setTab_group_id:(id)arg1;
-(void)setAlignment_schema:(id)arg1;
-(void)setRow_type:(int)arg1;
-(NSString *)tab_group_id;
-(id<PRSAlignmentSchema>)alignment_schema;
-(int)row_type;

@required
-(void)setTable_id:(id)arg1;
-(NSString *)table_id;

@end

