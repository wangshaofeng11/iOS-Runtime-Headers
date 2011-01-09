/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSIndexPath, NSString, UITableView;



@interface EKEventRecurrenceTypeViewController : EKEventEditItemViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_table;
    NSString *_customString;
    NSInteger _repeatType;
    NSIndexPath *_checkedItem;
}

@property NSInteger repeatType;


- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (NSInteger)repeatType;
- (void)setRepeatType:(NSInteger)arg1;
- (void)_checkItemAtIndexPath:(id)arg1;
- (void)setCustomString:(id)arg1;

@end