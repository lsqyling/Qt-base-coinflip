//
// Created by 10580.
//
#include <QSpinBox>
#include "spinbox_delegate.h"

QWidget *
spinbox_delegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    auto editor = new QSpinBox(parent);

    editor->setMinimum(150);
    editor->setMaximum(1000);
    editor->setFrame(false);

    return editor;
}

void spinbox_delegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    int value = index.model()->data(index, Qt::EditRole).toInt();
    if (auto spin_box = dynamic_cast<QSpinBox *>(editor))
    {
        spin_box->setValue(value);
    }
}

void spinbox_delegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    if (auto spin_box = dynamic_cast<QSpinBox *>(editor))
    {
        spin_box->interpretText();
        int value = spin_box->value();
        model->setData(index, value, Qt::EditRole);
    }
}

void spinbox_delegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option,
                                            const QModelIndex &index) const
{
    editor->setGeometry(option.rect);
}
